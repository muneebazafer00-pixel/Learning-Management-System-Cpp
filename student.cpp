// Student.cpp
#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(string id, string name, string email)
    : User(id, name, email), attendance(0) {} // initialize attendance

void Student::enrollCourse(string courseName) {
    enrolledCourses.push_back(courseName);
    cout << name << " enrolled in " << courseName << endl;
}

void Student::viewDashboard() {
    cout << "Student Dashboard for " << name << endl;
    for (auto &course : enrolledCourses)
        cout << "- " << course << endl;

    // NEW: show attendance and marks
    cout << "Attendance: " << attendance << "%" << endl;
    cout << "Marks: ";
    for (auto &m : assignmentMarks)
        cout << m << " ";
    cout << endl;
}

// NEW methods
void Student::addMarks(int marks) {
    assignmentMarks.push_back(marks);
}

vector<int> Student::getMarks() const {
    return assignmentMarks;
}

void Student::setAttendance(int percent) {
    attendance = percent;
}

int Student::getAttendance() const {
    return attendance;
}
