// create a class with overloaded functions calculate () to find 
// the area of rectangle, square and circle
#include <iostream>
using namespace std;

class Area
{
public:
    // Area of square
    void calculate(int side)
    {
        cout << "Area of Square = " << side * side << endl;
    }

    // Area of rectangle
    void calculate(int length, int breadth)
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    // Area of circle
    void calculate(double radius)
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area a;

    a.calculate(5);
    a.calculate(4, 6);
    a.calculate(3.5);

    return 0;
}
