#pragma once
#include <string>
class Golf
{
private:
    std::string fullname;
    int handicap;
public:
    Golf();
    Golf(const std::string& name, int hc) : fullname(name), handicap(hc) {};
    int setGolf();
    void setHandicap(int hc);
    void show();
};

