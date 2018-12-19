

#include "Email.h"

Email::Email(string firstName, string lastName)
{
    this->firstName=firstName;
    this->lastName=lastName;
    std::cout << "Email was created: " << this->firstName << " " << this->lastName << endl;

}

Email::~Email()
{
    //dtor
}

