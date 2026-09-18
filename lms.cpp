// LMS.cpp
#include "LMS.hpp"
#include <iostream>
using namespace std;

void LMS::addStudent(const Student &s) { students.push_back(s); }
void LMS::addInstructor(const Instructor &i) { instructors.push_back(i); }
void LMS::addCourse(const Course &c) { courses.push_back(c); }
void LMS::addAssignment(const Assignment &a) { assignments.push_back(a); }

void LMS::displayAll() {
    cout << "\n--- LMS Overview ---\n";

    cout << "Students:\n";
    if (students.empty())
        cout << "No students added yet.\n";
    else {
        for (auto &s : students) {
            cout << "- ID: " << s.getID()
                 << ", Name: " << s.getName()
                 << ", Email: " << s.getEmail() << endl;
            cout << "  Attendance: " << s.getAttendance() << "%" << endl;
            cout << "  Marks: ";
            for (int m : s.getMarks()) cout << m << " ";
            cout << endl;
        }
    }

    cout << "\nInstructors:\n"; 
    if (instructors.empty())
        cout << "No instructors added yet.\n";
    else {
        for (auto &i : instructors) {
            cout << "- ID: " << i.getID()
                 << ", Name: " << i.getName()
                 << ", Email: " << i.getEmail() << endl;
        }
    }

    cout << "\nCourses:\n";
    if (courses.empty())
        cout << "No courses added yet.\n";
    else {
        for (auto &c : courses)
            c.displayCourse();
    }
    }

// NEW: record marks for a specific student
void LMS::recordMarks(string studentId, int marks) {
    for (auto &student : students) {
        if (student.getID() == studentId) {
            student.addMarks(marks);
            cout << "Marks recorded for " << student.getName() << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

// NEW: record attendance for a specific student
void LMS::recordAttendance(string studentId, int percent) {
    for (auto &student : students) {
        if (student.getID() == studentId) {
            student.setAttendance(percent);
            cout << "Attendance recorded for " << student.getName() << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}
