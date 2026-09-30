// adding two number using objects (easy)
#include <iostream>
using namespace std;

class Number {
private:
    int val;

public:
    void setValue(int v) {
        val = v;
    }

    int getValue() const {
        return val;
    }
};

// Non-member function
Number add(Number n1, Number n2) {
    Number temp;
    temp.setValue(n1.getValue() + n2.getValue());
    return temp;
}

int main() {
    Number num1, num2, result;
    int v1, v2;

    cout << "Enter first number: ";
    cin >> v1;
    cout << "Enter second number: ";
    cin >> v2;

    num1.setValue(v1);
    num2.setValue(v2);

    result = add(num1, num2);

    cout << "Sum: " << result.getValue() << endl;
    return 0;
}
