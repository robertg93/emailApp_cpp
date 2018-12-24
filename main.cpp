#include <iostream>
#include "Email.h"



int main()
{
    Email em1("John","Smith");
    em1.setalternateEmail("a@b.com");
    std::cout << em1.getAlternateEmail();

    return 0;
}
