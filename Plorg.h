#pragma once
const int NAMELEN = 19;
class Plorg
{
private:
    char name[NAMELEN];
    int ci;
public:
    Plorg(const char* n = "Plorga", int cinum = 50);
    void report(); // shows name and ci
    void ciUpdate(int newci = 0); // changes ci
};

