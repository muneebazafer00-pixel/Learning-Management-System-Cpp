
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
        for (const auto &s : students) {
            cout << "- ID: " << s.getID() << endl 
                 << " Name: " << s.getName() << endl
                 << " Email: " << s.getEmail() << endl;
            cout << " Department: " << s.getDepartment() << endl; //  show department
            cout << " Attendance: " << s.getAttendance() << "%" << endl;
            cout << " Marks out of 100 : ";
            for (int m : s.getMarks()) cout << m << " ";
            cout << endl;
        }
    }

    cout << "\nInstructors:\n"; 
    if (instructors.empty())
        cout << "No instructors added yet.\n";
    else {
        for (const auto &i : instructors) {
            cout << "- ID: " << i.getID() << endl
                 << " Name: " << i.getName() << endl
                 << " Email: " << i.getEmail() << endl;
        }
    }

    cout << "\nCourses:\n";
    if (courses.empty())
        cout << "No courses added yet.\n";
    else {
        for (const auto &c : courses)
            c.displayCourse();
    }
    }

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

// record attendance for a specific student


