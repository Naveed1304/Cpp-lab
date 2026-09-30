// distance addition 
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    
    Distance addDistance(const Distance& d) const {
        Distance temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet + (temp.inches / 12);
        temp.inches %= 12;
        return temp;
    }

    void display() const {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1(14444444, 10);
    Distance d2(22221, 8);

    Distance sum = d1.addDistance(d2);

    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Total Distance: "; sum.display();

    return 0;
}