#include "Move.h"

#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}


void Move::showMove() const
{
    std::cout << "x: " << x << ", y: " << y << "\n";
}


Move Move::add(const Move& m) const
{
    int a = this->x + m.x;
    int b = this->y + m.y;
    Move l(a, b);
    return l;
}


void Move::reset(double a, double b)
{
    x = a;
    y = b;
}