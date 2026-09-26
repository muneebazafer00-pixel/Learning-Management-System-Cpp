// Student.hpp
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "User.hpp"
#include <vector>
#include <string>

class Student : public User {
private:
    vector<string> enrolledCourses;
    vector<int> assignmentMarks;   // store marks
    int attendance;                // store attendance percentage
    string department; 

public:
    Student(string id = "", string name = "", string email = "", string dept = "");

    void enrollCourse(string courseName);
    void viewDashboard() override;

    // NEW methods
    void addMarks(int marks);
    vector<int> getMarks() const;

    void setAttendance(int percent);
    int getAttendance() const;

   void setDepartment(string dept);
   string getDepartment() const;
};

#endif
