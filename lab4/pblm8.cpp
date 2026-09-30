// Friend function - Largest Number 
#include <iostream>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    A(int x)
    {
        a = x;
    }

    friend int calculateSum(A, B);
};

class B
{
private:
    int b;

public:
    B(int y)
    {
        b = y;
    }

    friend int calculateSum(A, B);
};

int calculateSum(A objA, B objB)
{
    return objA.a + objB.b;
}

int main()
{
    A objA(10);
    B objB(20);

    cout << "A = 10" << endl;
    cout << "B = 20" << endl;
    cout << "Sum = " << calculateSum(objA, objB) << endl;

    return 0;
}