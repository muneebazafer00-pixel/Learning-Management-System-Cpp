#include "utils.hpp"
#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n===== LMS Menu =====\n";
    cout << "1. Add Student\n";
    cout << "2. Add Instructor\n";
    cout << "3. Add Course\n";
    cout << "4. Display All\n"; // Option 4 renamed
    cout << "5. Exit\n";        // Exit shifted
}

string getInput(const string &prompt) {
    cout << prompt;
    string input;
    getline(cin, input);
    return input;
}
