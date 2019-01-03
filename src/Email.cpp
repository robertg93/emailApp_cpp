

#include "Email.h"

Email::Email()
{
    cout << "\033[2J\033[1;1H";
    cout << "Enter first name" << endl;
    cin >>firstName;
    cout << "Enter last name" << endl;
    cin>>lastName;
    //std::cout << "Email was created: " << this->firstName << " " << this->lastName << endl;

    this->department = setDepartment();
    //cout << "your department: "<< this->department << endl;

    this->password = randomPassword(length);
    //cout << "your password: "<< this->password << endl;
    setMailboxCapacity(mailboxCapacity);

     //email generate
     email= tolower(firstName) + "." + tolower(lastName) + "@" + department + "." + companySuffix;//tolower(firstName);
     //cout << "Your email is: "<<this->email;
     cout << "\033[2J\033[1;1H";
    cout << "User was created!" << endl << flush;

    showInfo();
    cout<<endl;
    cin.ignore();
    cin.get();


}

Email::~Email()
{
    //dtor
}

 // ask for the department

string Email::setDepartment()
{
    cout << " ENTER DEPARTMENT CODE \n1 Sales \n2 Development \n3 Accounting \n4 None \n Select your department:" << endl;
    int depChoice;
    cin >> depChoice;

    switch(depChoice) {
    case 1 : return "sales";

    case 2 : return "dev";

    case 3 : return "acct";

    case 4 : return "";

    }

}


    //generate the radndom password

string    Email::randomPassword(int length)
    {
        string setPassword = "ABCDEFGHIJKLMNOPQRSTUXYZ01234567891@#$%";
        string pass="";


        srand(time(NULL));
        for (int i=0; i<length; i++)
        {
        int randNum = rand()%((setPassword.size() - 1 + 1) + 1);

        pass+=setPassword[randNum];

        }

        return pass;

    }



    //  set mailbox capacity

     void Email::setMailboxCapacity(int capacity)
     {
         this->mailboxCapacity=capacity;
     }

    //set alternate email
     void Email::setalternateEmail(string alterEmail)
     {
         this->alternateEmail=alterEmail;
     }

    // change the pasword

     void Email::changePassword(string password)
     {
         this->password=password;
     }

     int Email::getMailboxCapacity(){ return mailboxCapacity; }
     string Email::getAlternateEmail() {return alternateEmail; }
     string Email::getPassword(){ return this->password; }

    void Email::showInfo()
    {
        cout << "NAME:             "<< firstName << " " << lastName << endl;
        cout << "COMPANY EMAIL:    "<< email << endl;
        cout << "MAILBOXCAPACITY:  "<< mailboxCapacity <<"mb" << endl;
        cout << "PASSWORD          "<< password << endl;

    }

string Email::tolower(string str){


std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    return str;
}
