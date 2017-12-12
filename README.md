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
#### 1. Golf
Recreate the `golf` exercise from Chapter 9 but replace the code with a `golf` class.
#### 2. Sales
Do the `sales` exercise from Chapter 9 but convert the `Sales` `struct` and its functions to a class and its methods.
#### 3. Move
Create a `Move` class that has x and y variables and `show`, `add`, and `reset` functions. the `add` function should take a reference to another `Move` object and return a new `Move` object with x and y values as the sum of the x and y of the calling and passed objects. `reset` should have 2 default arguments that can be overloaded to change x and y.
#### 4. Plorg
A `Plorg` has the following characteristics:
- A `name` with no more than 19 letters
- A contentment index (CI), which is an integer
- `Plorg`s start with a default name of `Plorga` and a default CI of 50
- A `Plorg`'s CI can change
- A `Plorg` can report its name and CI
Write a `Plorg` class that represents a plorg.
