#ifndef Email_H
#define Email_H

#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <fstream>


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

    Email();
    Email(string name);  //constructor to receive the first name and the last name
    void setMailboxCapacity(int capacity);
    void setalternateEmail(string alterEmail);
    void static setNumberOfObjects(int x);
    void changePassword(string password);
    int getMailboxCapacity();
    int static getNumberOfObjects();
    string getFirstName();
    string getLastName();
    string getAlternateEmail();
    string getPassword();
    static int numberOfObjects;
    void showInfo();
    friend  istream& operator>>(istream& is, Email& en);
    friend ostream& operator<<(ostream& os, const Email& en);


    virtual ~Email(); //destructor




    string randomPassword(int);//generate the radndom password

    //  set mailbox capacity

    //set alternate email

    // change the pasword






    protected:


};

istream& operator>>(istream& is, Email& en);
ostream& operator<<(ostream& os, const Email& en);


#endif // Email_H

