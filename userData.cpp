#include <iostream>
#include <fstream>
#include "userData.h"
#include "user.h"
using namespace std;

bool UserData::signup(string username, string password, string aadhar, string pan)
{
    if (isUserExist(username))
    {
        cout << "User already exist \n";
        return false;
    }

    users.emplace_back(username, password, aadhar, pan);

    // save user info to a file
    saveUserInfo(users.back());

    cout << " Signup Successfull !! Please Login to continue \n";
    return true;
}

bool UserData::login(string username, string password, string &loggedInUser)
{
    for (User &user : users)
    {
        if (user.getUserName() == username)
        {
            loggedInUser = username;
            return true;
        }
    }
    cout << "Invalid Username or password :(" << endl;
    return false;
}

bool UserData::isUserExist(string username)
{
    for (User &user : users)
    {
        if (user.getUserName() == username)
        {
            return true;
        }
    }
    return false;
}

bool UserData::saveUserInfo(User user)
{
    string filePath = "D:\\Padhle_bhai\\c++\\cpp_projects\\projectCommittee\\Commiittee\\UsersInfo\\" + user.getUserName() + ".txt";
    std::ofstream userFile(filePath, std::ios::app); // Open the file in append mode

    if (userFile.is_open())
    {
        // Write user information to the file
        userFile << "Username : " << user.getUserName() << "\n";
        userFile << "Password : " << user.getPass() << "\n";
        userFile << "Aadhar : " << user.getAadhar() << "\n";
        userFile << "Pan : " << user.getPan() << "\n";
        // userFile << "Status : " << user.getStatus() << "\n";
        userFile.close();
        std::cout << "User information saved successfully." << std::endl;
    }
    else
    {
        std::cerr << "Error: Unable to open the file for saving user information." << std::endl;
    }
}