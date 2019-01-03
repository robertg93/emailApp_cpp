#include <iostream>
#include "Email.h"



int main()
{

    string str;
    vector<Email> vec;
    do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 0 Exit " << endl;
        cin >> str;
            if (str == "1")
                {
                    vec.push_back(Email());
                }
        }

    while(str != "0");
    //Email em1("John","Smith");
    //em1.showInfo();

    return 0;
}
