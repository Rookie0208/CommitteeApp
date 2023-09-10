#ifndef USER_H
#define USER_H
#include <string>
using std::string;

class User
{
private:
    string username;
    string password;
    string aadharCard;
    string panCard;
    // string status = "Not PAID";

public:
    User() {};
    User(string username, string password, string aadhar, string pan) : username(username), password(password), aadharCard(aadhar), panCard(pan) {}

    string getUserName();
    string getPass();
    string getAadhar();
    string getPan();
    // string getStatus();
    bool checkPass(string pass);
    void displayUserProfile(string loggedInUser);
    
};

#endif // USER_H