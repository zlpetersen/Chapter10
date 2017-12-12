#include "Person.h"

#include <iostream>


Person::Person(const std::string& ln, const char* fn)
{
    lname = ln;
    strcpy_s(fname, fn);
}


void Person::show() const
{
    std::cout << fname << " " << lname << "\n";
}


void Person::showFormal() const
{
    std::cout << lname << ", " << fname << "\n";
}