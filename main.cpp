#include <iostream>
#include "LMS.hpp"
#include "utils.hpp"
using namespace std;

int main() {
    LMS system;
    int choice;

    do {
        showMenu();
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) { 
    string id = getInput("Enter Student ID: ");
    string name = getInput("Enter Student Name: ");
    string email = getInput("Enter Student Email: ");
    string dept = getInput("Enter Student Department: "); 
    int attendance, marks;

    cout << "Enter Attendance Percentage: ";
    cin >> attendance;
    cin.ignore();

    cout << "Enter Obtained Marks: ";
    cin >> marks;
    cin.ignore();

    Student s(id, name, email, dept); //  pass dept
    s.setAttendance(attendance);
    s.addMarks(marks);
    system.addStudent(s);

    cout << "Student added successfully with department, marks, and attendance!\n";
        } 
        else if (choice == 2) {
            string id = getInput("Enter Instructor(your) ID: ");
            string name = getInput("Enter Instructor(your) Name: ");
            string email = getInput("Enter Instructor(your) Email: ");
            Instructor i(id, name, email);
            system.addInstructor(i);
            i.viewDashboard();
        } 
        else if (choice == 3) {
            string id = getInput("Enter Course ID: ");
            string name = getInput("Enter Course Name: ");
            system.addCourse(Course(id, name));
        } 
        else if (choice == 4) {
            system.displayAll();
            cout << "\nPress Enter to continue...";
            cin.get();
        } 
        else if (choice == 5) {
            char confirm;
            cout << "\nAre you sure you want to exit?\n";
            cout << "Warning: Your entered data will be erased!\n";
            cout << "Press Y to confirm, N to cancel: ";
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y') {
                cout << "Exiting LMS ~(^_^)~ Goodbye!\n";
                break;
            } else {
                choice = 0;
            }
        }

    } while (true);

    return 0;
}
