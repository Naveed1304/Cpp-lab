#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> target;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    cout << index << endl;
    return 0;
}