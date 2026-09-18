// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    string courseID, courseName;

public:
    Course(string id = "", string name = "");
    void displayCourse() const;
    string getName() const;
};

#endif
