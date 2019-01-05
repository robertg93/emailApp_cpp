#include <iostream>
#include "Email.h"

void showUsers();
vector<Email> vec;
void loadNumberOfObjects();
void saveNumberOfobjects();
void loadUserToVec();
void createNewUser();

int main()
{

    int option;
    loadNumberOfObjects();
    loadUserToVec();

    do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    createNewUser();
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
    for ( int i = 0; i<vec.size() ; i++)
    {

        cout << vec[i].getFirstName() << " " << vec[i].getLastName() <<  endl;
        // vec[i].showInfo();
    }
    cin.ignore();
    cin.get();
}

void loadNumberOfObjects()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfObject.txt");
                    inNum >> tempnum;
                    Email::setNumberOfObjects(tempnum);
}

void saveNumberOfobjects()
{
                    ofstream outNum;
                    outNum.open ("numberOfObject.txt");
                    outNum << Email::getNumberOfObjects();
}


void loadUserToVec()
{
    ifstream in("savedUsers");
    int temp = Email::getNumberOfObjects();
    for ( int i = 0; i<temp ; i++)
    {
        Email e1;
        in >> e1;
        vec.push_back(e1);
    }

    in.close();


}

void createNewUser()
{
    string temp;
                    cout << "Enter Your name:" << endl;
                    cin>>temp;
                    Email em1(temp);
                    vec.push_back(em1);
                    ///////////////////////
                    ofstream out("savedUsers", fstream::app);
                    out << em1;
                    out.close();
                    saveNumberOfobjects();
}
