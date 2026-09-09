#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}