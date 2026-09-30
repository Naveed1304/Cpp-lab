//friend - function - largest Number 
#include <iostream>
using namespace std;

class Numbers
{
private:
    int a;
    int b;

public:
    Numbers(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void findLargest(Numbers n);
};

void findLargest(Numbers n)
{
    if (n.a > n.b)
        cout << "Largest = " << n.a << endl;
    else
        cout << "Largest = " << n.b << endl;
}

int main()
{
    Numbers n(25, 40);

    cout << "Numbers: 25 and 40" << endl;

    findLargest(n);

    return 0;
}