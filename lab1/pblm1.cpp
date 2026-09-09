#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maxNum = (a >= b && a >= c) ? a : ((b >= c) ? b : c);
    cout << maxNum << endl;
    return 0;
}