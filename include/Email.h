#ifndef Email_H
#define Email_H

#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <vector>



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
    int mailboxCapacity=500;
    int length = 10;
    string alternateEmail;
    string setDepartment(); // ask for the department
    string tolower(string str); //changing to lower case



    public:

    Email();  //constructor to receive the first name and the last name
    void setMailboxCapacity(int capacity);
    void setalternateEmail(string alterEmail);
    void changePassword(string password);
    int getMailboxCapacity();
    string getAlternateEmail();
    string getPassword();
    void showInfo();

    virtual ~Email(); //destructor




    string randomPassword(int);//generate the radndom password

    //  set mailbox capacity

    //set alternate email

    // change the pasword






    protected:


};

#endif // Email_H

