// Instructor.cpp
#include "Instructor.hpp"
#include <iostream>
using namespace std;

Instructor::Instructor(string id, string name, string email)
    : User(id, name, email) {}

void Instructor::addCourse(string courseName) {
    teachingCourses.push_back(courseName);
    cout << name << " added course: " << courseName << endl;
}

void Instructor::viewDashboard() {
    cout << "Instructor Dashboard for " << name << endl;
    for (auto &course : teachingCourses)
        cout << "- " << course << endl;
}
