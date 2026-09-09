#include <iostream>
using namespace std;

int main() {
    int n, target, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) count++;
    }
    cout << count << endl;
    return 0;
}