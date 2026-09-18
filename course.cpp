// Course.cpp
#include "Course.hpp"
#include <iostream>
using namespace std;

Course::Course(string id, string name)
    : courseID(id), courseName(name) {}

void Course::displayCourse() const {
    cout << "Course ID: " << courseID << ", Name: " << courseName << endl;
}

string Course::getName() const { return courseName; }
