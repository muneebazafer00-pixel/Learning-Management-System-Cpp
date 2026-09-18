// User.hpp
#ifndef USER_HPP
#define USER_HPP

#include <string>
using namespace std;

class User {
protected:
    string id, name, email;

public:
    User(string id = "", string name = "", string email = "");
    virtual void login();
    virtual void viewDashboard() = 0;
    string getName() const;
    string getID() const;
    string getEmail() const { return email; }
};

#endif
