#ifndef Email_H
#define Email_H

#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;
class Email
{
    private:
    string firstName;
    string lastName;
    string password;
    string email;
    string department;
    string companySuffix ="xyzcompany.com";
    int mailboxCapacity;
    int length = 10;
    string alternateEmail;
    string setDepartment(); // ask for the department
    string tolower(string str); //changing to lower case



    public:

    Email(string firstName, string lastName);  //constructor to receive the first name and the last name
    void setMailboxCapacity(int capacity);
    void setalternateEmail(int alterEmail);
    void changePassword(int password);

    virtual ~Email(); //destructor




    string randomPassword(int);//generate the radndom password

    //  set mailbox capacity

    //set alternate email

    // change the pasword






    protected:


};

#endif // Email_H

