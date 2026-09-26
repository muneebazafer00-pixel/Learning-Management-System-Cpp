#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(string id, string name, string email, string dept)
    : User(id, name, email), attendance(0), department(dept) {} // initialize dept

void Student::enrollCourse(string courseName) {
    enrolledCourses.push_back(courseName);
    cout << name << " enrolled in " << courseName << endl;
}

void Student::viewDashboard() {
    cout << "Student Dashboard for " << name << endl;
    cout << "Department: " << department << endl; //show department
    for (auto &course : enrolledCourses)
        cout << "- " << course << endl;

    cout << "Attendance: " << attendance << "%" << endl;
    cout << "Marks: ";
    for (auto &m : assignmentMarks)
        cout << m << " ";
    cout << endl;
}

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

void Student::setDepartment(string dept) { department = dept; } 
string Student::getDepartment() const { return department; }    
