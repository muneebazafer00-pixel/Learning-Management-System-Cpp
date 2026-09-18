// Assignment.cpp
#include "Assignment.hpp"
#include <iostream>
using namespace std;

Assignment::Assignment(string title, int marks)
    : title(title), maxMarks(marks) {}

void Assignment::displayAssignment() const {
    cout << "Assignment: " << title << " | Max Marks: " << maxMarks << endl;
}
