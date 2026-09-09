#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (n == 0) return 0;

    int j = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}