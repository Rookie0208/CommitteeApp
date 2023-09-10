#include<iostream>
#include "committee.h"
#include "userData.h"
using namespace std;

void Committee::firstMenu() {
    string loggedInUser;
cout << "**************     Welcome to Digital Committee    **************\n";
    char choice;
    int exit = 0;
    string username, password;
    string aadhar, pan;
    while (!exit)
    {
        // cout << "Welcom to Commiittee App:\n";
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case '1':
            // call login function in login class
            cout << "Enter Username : ";
            cin >> username;
            cout << "Enter Password : ";
            cin >> password;
            if(userData.login(username,password, loggedInUser)) {
                cout << "Welcome, "<< loggedInUser << " !! "<< endl;
                displayLoggedInMenu(loggedInUser);
            }

            break;
        case '2':
            // call signup function in signup class
            cout << "Enter Username : ";
            cin >> username;
            cout << "Enter Password : ";
            cin >> password;
            cout << "Enter Aadhar : ";
            cin >> aadhar;
            cout << "Enter Pan : ";
            cin >> pan;
            userData.signup(username, password, aadhar, pan);
            break;
        case '3':
            exit = 1;
            cout << "\t\t\tExiting...\n";
            break;
        default:
            cout << "Invalid choice. Please select again.\n";
            // break;
        }
    }
}

void Committee::displayMenu() {
        cout << "MENU : \n";
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Signup" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

void Committee::displayLoggedInMenu(string loggedInUser) {
    User user;
    char choice;
    int exit = 0;
    while (!exit)
    {
        cout << "Welcom to Commiittee App:\n";
        cout << "MENU : \n";
        cout << "1. Display Profile\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
                user.displayUserProfile(loggedInUser);
            break;
        case '2':
            exit = 1;
            cout << "\t\t\tExiting...\n";
            break;
        default:
            cout << "Invalid choice. Please select again.\n";
            // break;
        }
    }
}