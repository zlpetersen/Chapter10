#include <iostream>
#include <string>

#include "Person.h"
#include "Golf.h"
#include "Sales.h"
#include "Move.h"
#include "Plorg.h"

const char* ERR = "Please enter a valid input\n";

void ignore();
void showMenu();

void personCaller();

void golfCaller();

void salesCaller();

void moveCaller();

void plorgCaller();


int main()
{
    showMenu();
    std::string input;
    while (std::getline(std::cin, input))
    {
        char cinput = input[0];
        if (!(isdigit(cinput)))
        {
            if (toupper(cinput) == 'Q')
                return 0;
            //ignore();
            std::cout << ERR;
            showMenu();
            continue;
        }
        int choice = atoi(&cinput);
        switch (choice)
        {
        case 0: personCaller(); break;
        case 1: golfCaller(); break;
        case 2: salesCaller(); break;
        case 3: moveCaller(); break;
        case 4: plorgCaller(); break;
        default: std::cout << ERR; break;
        }
        showMenu();
    }
    return 0;
}


void ignore()
{
    std::cin.clear();
    std::cin.ignore(100, '\n');
}


void showMenu()
{
    std::cout << "0) Person\n1) Golf\n2) Sales\n3) Move\n4) Plorg\nq) Quit\n>";
}


void personCaller()
{
    Person p0; // default constructor
    Person p1("Smythecraft"); // one default argument
    Person p2("Dimwiddy", "Sam"); // no default arguments
    std::cout << "p0.show(): ";
    p0.show();
    std::cout << "p1.showFormal(): ";
    p1.showFormal();
    std::cout << "p2.show(): ";
    p2.show();
}


void golfCaller()
{
    Golf golfer("Bobby Jeffer", 3);
    Golf golferi;
    golferi.setGolf();
    golfer.show();
    golferi.show();
}


void salesCaller()
{
    SALES::Sales s;
    s.setSales();
    const double ar[3]{ 4, 2.5, 7.3 };
    SALES::Sales ss(ar, 3);
    std::cout << "\nSales 1:\n";
    s.showSales();
    std::cout << "\nSales 2:\n";
    ss.showSales();
    std::cout << '\n';
    ignore();
}


void moveCaller()
{
    Move m;
    Move l(4);
    Move k(3, 7);
    std::cout << "m: ";
    m.showMove();
    std::cout << "l: ";
    l.showMove();
    std::cout << "k: ";
    k.showMove();
    Move g = l.add(k);
    std::cout << "l + k: ";
    g.showMove();
}


void plorgCaller()
{
    Plorg p;
    std::cout << "Default Plorg: ";
    p.report();
    p.ciUpdate(3);
    std::cout << "Updated CI: ";
    p.report();
}
