// find larger number 
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    void setData(int r, float m) {
        rollNo = r;
        marks = m;
    }

    void display() const {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }

    float getMarks() const {
        return marks;
    }
};

// Non-member function
Student findTop(Student s1, Student s2) {
    if (s1.getMarks() > s2.getMarks()) {
        return s1;
    }
    return s2;
}

int main() {

    Student s1, s2, top;
    s1.setData(101, 85.5);
    s2.setData(102, 92.0);

    top = findTop(s1, s2);

    cout << "Top Student details:\n";
    top.display();

return 0;
}