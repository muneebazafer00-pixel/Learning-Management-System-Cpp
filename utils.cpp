// utils.cpp
#include "utils.hpp"
#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n===== LMS Menu =====\n";
    cout << "1. Add Student\n";
    cout << "2. Add Instructor\n";
    cout << "3. Add Course\n";
    cout << "4. Add Assignment Marks\n";
    cout << "5. Display All\n";
    cout << "6. Exit\n";
}

string getInput(const string &prompt) {
    cout << prompt;
    string input;
    getline(cin, input);
    return input;
}
