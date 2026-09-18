// Instructor.hpp
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "User.hpp"
#include <vector>
#include <string>

class Instructor : public User {
private:
    vector<string> teachingCourses;

public:
    Instructor(string id = "", string name = "", string email = "");
    void addCourse(string courseName);
    void viewDashboard() override;
};

#endif
