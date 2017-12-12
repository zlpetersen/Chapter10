#include "Golf.h"

#include <iostream>
#include <string>

Golf::Golf()
{
    fullname = "";
    handicap = 0;
}


int Golf::setGolf()
{
    std::string name;
    std::cout << "Enter full name: ";
    std::getline(std::cin, name);
    //std::cin.clear();
    //std::cin.ignore(100, '\n');
    int hc;
    std::cout << "Enter handicap: ";
    std::cin >> hc;
    (*this) = Golf(name, hc);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return fullname == "";
}


void Golf::setHandicap(int hc)
{
    handicap = hc;
}


void Golf::show()
{
    std::cout << "Name: " << fullname << "\nHandicap: " << handicap << "\n";
}
