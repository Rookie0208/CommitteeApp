#include <iostream>
#include "user.h"

using namespace std;

string User::getUserName()
{
    return username;
}
bool User::checkPass(string pass)
{
    if (password == pass)
        return true;
    else
        return false;
}

string User::getAadhar()
{
    return aadharCard;
}
string User::getPan()
{
    return panCard;
}
string User::getPass() {
    return password;
}
// string User::getStatus() {
//     return "Not Paid";
// }
void User::displayUserProfile(string loggedInUser)
{
    // cout << "Username : " << loggedInUser << endl;
    // // cout << "password : " << password << endl;
    // cout << "Aadhar Card : " << getAadhar() << endl;
    // cout << "Pan Card : " << getPan() << endl;

    char choice;
    int exit = 0;
    while (!exit)
    {
        cout << "Welcom !! "<< loggedInUser << "\nMy Profile:\nTotal Amount\t: 300.00\nInvested\t: 100.00\nBorrowed\t: 0.00\nROI\t\t: 150.00" << endl;
        // cout << "Status\t\t: " << getStatus() << endl;
        cout << endl;
        cout << "You want to pay?\nY. Continue\nN. Menu\n";
        cout << "Enter your choice: ";

        cin >> choice;
        tolower(choice);
        switch (choice)
        {
        case 'y':
            cout << "\nPAY AMOUNT \nTotal Amount\t\t: 300\nAmount to be paid\t: 100" << endl;
            // paymentDetails();
            break;

        case 'n':
            exit = 1;
            break;

        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    }
}