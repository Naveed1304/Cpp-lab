//complex number 
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}


    Complex add(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    //member funnction for multiplication 


    Complex multiply(const Complex& c) const {
        float r = (real * c.real) - (imag * c.imag);
        float i = (real * c.imag) + (imag * c.real);
        return Complex(r, i);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex subtract(const Complex& c1, const Complex& c2);
};

// Non-member function for subtraction
Complex subtract(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex c1(4, 5), c2(2, 3);

    Complex sum = c1.add(c2);
    Complex diff = subtract(c1, c2);
    Complex prod = c1.multiply(c2);

    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    cout << "Addition: "; sum.display();
    cout << "Subtraction: "; diff.display();
    cout << "Multiplication: "; prod.display();

    return 0;
}