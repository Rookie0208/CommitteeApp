#ifndef USERDATA_H
#define USERDATA_H
#include "user.h"
#include<vector>

using std::vector;

class UserData {
    private:
    vector<User> users;

    public:
    bool signup(string username, string password, string aadhar, string pan);

    bool login(string username, string password, string &loggedInUser);

    bool isUserExist(string username);

    bool saveUserInfo(User user);

};

#endif // USERDATA_H
