// Student.hpp
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "User.hpp"
#include <vector>
#include <string>

class Student : public User {
private:
    vector<string> enrolledCourses;
    vector<int> assignmentMarks;   // NEW: store marks
    int attendance;                // NEW: store attendance percentage

public:
    Student(string id = "", string name = "", string email = "");

    void enrollCourse(string courseName);
    void viewDashboard() override;

    // NEW methods
    void addMarks(int marks);
    vector<int> getMarks() const;

    void setAttendance(int percent);
    int getAttendance() const;
};

#endif
