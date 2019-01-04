#include <iostream>
#include "Email.h"

void showUsers();
vector<Email> vec;
void loadNumberOfObjects();
void saveNumberOfobjects();

int main()
{

    int option;

    loadNumberOfObjects();
    do
        {
        //cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    string temp;
                    cout << "Enter Your name:" << endl;
                    cin>>temp;
                    Email em1(temp);
                    vec.push_back(em1);
                    ofstream out("savedUsers", fstream::app);
                    out << em1;
                    out.close();
                    saveNumberOfobjects();



                }

            if (option == 2)
                {
                    //cout << "cos tam";
                    showUsers();
                }
        }

    while(option != 0);

    return 0;
}

void showUsers()
{
     //cout << "\033[2J\033[1;1H";   //clear screen
    for ( int i = 0; i<100 ; i++)
    {
        ifstream in("savedUsers");
        //cout << "fadsfasdf";
        Email e1; //// NIE DZIALA UZYC KONSTRUKTORA KOPIUJAcego
        in >> e1;
        in.close();
        //cout << 345 << endl;
        cout << e1.getFirstName();
        //cout << 123 <<endl;
        //cout << vec[i].getFirstName() << " " << vec[i].getLastName();
        //cout<<endl;

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
