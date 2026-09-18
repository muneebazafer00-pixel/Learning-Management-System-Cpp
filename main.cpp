#include <iostream>
#include "LMS.hpp"
#include "utils.hpp"
using namespace std;

int main() {
    LMS system;
    int choice;

    do {
        showMenu();
        std::cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string id = getInput("Enter Student ID: ");
            string name = getInput("Enter Student Name: ");
            string email = getInput("Enter Student Email: ");
            int attendance;
            std::cout << "Enter Attendance Percentage: ";
            std::cin >> attendance;
            std::cin.ignore();

            Student s(id, name, email);
            s.setAttendance(attendance); // NEW: set attendance while adding student
            system.addStudent(s);
        } else if (choice == 2) {
            string id = getInput("Enter Instructor ID: ");
            string name = getInput("Enter Instructor Name: ");
            string email = getInput("Enter Instructor Email: ");
            system.addInstructor(Instructor(id, name, email));
        } else if (choice == 3) {
            string id = getInput("Enter Course ID: ");
            string name = getInput("Enter Course Name: ");
            system.addCourse(Course(id, name));
        } else if (choice == 4) {
            string studentId = getInput("Enter Student ID: ");
            int marks;
            std::cout << "Enter Obtained Marks: ";
            std::cin >> marks;
            std::cin.ignore();
            system.recordMarks(studentId, marks); // link marks to student
        } else if (choice == 5) {
            system.displayAll();
            std::cout << "\nPress Enter to continue...";
            std::cin.get(); // waits for Enter key
        } else if (choice == 6) {
            char confirm;
            cout << "\nAre you sure you want to exit?\n";
            cout << "Warning: Your entered data will be erased!\n";
            cout << "Press Y to confirm, N to cancel: ";
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y') {
                cout << "Exiting LMS(^_^) Goodbye!\n";
                break; // exit loop
            } else {
                choice = 0; // reset choice so loop continues
            }
        }

    } while (true);

    return 0;
}


//g++ -std=c++11 test/main.cpp src/*.cpp -I header -o oop


