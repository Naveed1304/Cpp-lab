#include <iostream>
using namespace std;

class Interest
{
public:
    inline float calculateSI(float P, float R, float T)
    {
        return (P * R * T) / 100;
    }
};

int main()
{
    Interest obj;

    float P = 10000;
    float R = 5;
    float T = 2;

    cout << "P = " << P << endl;
    cout << "R = " << R << endl;
    cout << "T = " << T << endl;

    cout << "SI = " << obj.calculateSI(P, R, T) << endl;

    return 0;
}