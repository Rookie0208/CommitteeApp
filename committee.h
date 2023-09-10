#ifndef COMMITTEE_h
#define COMMITTEE_h
#include "userData.h"
#include "user.h"
#include <string>
using std::string;

class Committee
{
private:
    UserData userData;

public:
    void firstMenu();   // will contain the display menu and switch case.

    void displayMenu(); // menu for login signup

    void displayLoggedInMenu(string loggedInUser);     // profile and exit
};

#endif // COMMITTEE_h