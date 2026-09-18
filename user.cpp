// User.cpp
#include "User.hpp"
#include <iostream>
using namespace std;

User::User(string id, string name, string email)
    : id(id), name(name), email(email) {}

void User::login() {
    cout << "User " << name << " logged in successfully.\n";
}

string User::getName() const { return name; }
string User::getID() const { return id; }
