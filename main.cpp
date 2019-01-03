#include <iostream>
#include "Email.h"
void showUsers();
vector<Email> vec;

int main()
{

    int option;

    do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    vec.push_back(Email());

                }

            if (option == 2)
                {
                    showUsers();
                }
        }

    while(option != 0);

    return 0;
}

void showUsers()
{
     cout << "\033[2J\033[1;1H";   //clear screen
    for ( int i = 0; i<vec.size() ; i++)
    {

        cout << vec[i].getFirstName() << " " << vec[i].getLastName();
        cout<<endl;

    }
    cin.ignore();
    cin.get();
}

