#include "Plorg.h"

#include <string>
#include <iostream>

Plorg::Plorg(const char* n, int cinum)
{
    strcpy_s(name, n);
    ci = cinum;
}


void Plorg::report()
{
    std::cout << "Name: " << name << ", CI: " << ci << "\n";
}


void Plorg::ciUpdate(int newci)
{
    ci = newci;
}
