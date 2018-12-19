#ifndef Email_H
#define Email_H
#include <string>
#include <iostream>

using namespace std;
class Email
{
    private:
    string firstName;
    string lastName;
    string password;
    string department;
    int mailboxCapacity;
    string alternateEmail;





    public:

    //constructor to receive the first name and the last name
        Email(string firstName, string lastName);

        virtual ~Email();

    // ask for the department


    //generate the radndom password

    //  set mailbox capacity

    //set alternate email

    // change the pasword






    protected:


};

#endif // Email_H

