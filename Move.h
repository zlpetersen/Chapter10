#pragma once
class Move
{
private:
    double x;
    double y;
public:
    // sets x, y to a, b
    Move(double a = 0, double b = 0);

    //shows current x, y values
    void showMove() const;

    // adds x and y of m to x and y of invoking object
    // and returns a new object using the new values
    Move add(const Move& m) const;

    // resets x, y to a, b
    void reset(double a = 0, double b = 0);
};

