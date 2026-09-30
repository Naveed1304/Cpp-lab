#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    bool equalArea(Rectangle r) {
        return (length * width == r.length * r.width);
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    friend Rectangle mergeRectangle(Rectangle, Rectangle);
};

Rectangle mergeRectangle(Rectangle r1, Rectangle r2) {
    Rectangle r;
    r.length = r1.length + r2.length;
    r.width = r1.width + r2.width;
    return r;
}

int main() {
    Rectangle r1, r2, r3;

    cout << "Enter details of Rectangle 1:\n";
    r1.input();

    cout << "\nEnter details of Rectangle 2:\n";
    r2.input();

    if (r1.equalArea(r2))
        cout << "\nBoth rectangles have equal area.\n";
    else
        cout << "\nRectangles do not have equal area.\n";

    r3 = mergeRectangle(r1, r2);

    cout << "\nMerged Rectangle:\n";
    r3.display();

    return 0;
}