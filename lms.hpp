// LMS.hpp
#ifndef LMS_HPP
#define LMS_HPP

#include "Student.hpp"
#include "Instructor.hpp"
#include "Course.hpp"
#include "Assignment.hpp"
#include <vector>

class LMS {
private:
    vector<Student> students;
    vector<Instructor> instructors;
    vector<Course> courses;
    vector<Assignment> assignments;

public:
    void addStudent(const Student &s);
    void addInstructor(const Instructor &i);
    void addCourse(const Course &c);
    void addAssignment(const Assignment &a);
    void displayAll();

    // NEW: methods to record marks and attendance
    void recordMarks(string studentId, int marks);
    void recordAttendance(string studentId, int percent);
};

#endif
