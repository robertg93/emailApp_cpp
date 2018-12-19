

#include "Email.h"

Email::Email(string firstName, string lastName)
{
    this->firstName=firstName;
    this->lastName=lastName;
    std::cout << "Email was created: " << this->firstName << " " << this->lastName << endl;

    this->department = setDepartment();
}

Email::~Email()
{
    //dtor
}

string Email::setDepartment()
{
    cout << "Select your department: \n1 Sales \n2 Development \n3 Accounting \n4 None" << endl;
    int depChoice;
    cin >> depChoice;

    switch(depChoice) {
    case 1 : return "sales";
             break;       // and exits the switch
    case 2 : return "dev";
             break;
    case 3 : return "acct"; // prints "1"
             break;       // and exits the switch
    case 4 : return "";
             break;
}

}
