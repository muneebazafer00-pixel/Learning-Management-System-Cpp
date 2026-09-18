// Assignment.hpp
#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP
#include <string>
using namespace std;

class Assignment {
private:
    string title;
    int maxMarks;

public:
    Assignment(string title = "", int marks = 0);
    void displayAssignment() const;
};

#endif
