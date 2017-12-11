# Chapter10
#### 0. Person
Implement the functions of the following class definition:
`
class Person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const std::string& ln, const char* fn = "Heyyou");

    // firstname lastname format
    void show() const;

    // lastname, firstname format
    void showFormal() const;
};
`
