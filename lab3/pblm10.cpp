#include <iostream>
using namespace std;

class Result {
    int rollNumber;
    int marks[5];

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int total() {
        int sum = 0;

        for (int i = 0; i < 5; i++)
            sum += marks[i];

        return sum;
    }

    void compare(Result r) {
        if (total() > r.total())
            cout << "Roll No " << rollNumber << " has higher marks.\n";
        else if (total() < r.total())
            cout << "Roll No " << r.rollNumber << " has higher marks.\n";
        else
            cout << "Both students have equal marks.\n";
    }

    void applyGrace() {
        int grace;

        for (int i = 0; i < 5; i++) {
            cout << "Enter grace marks for Subject "
                 << i + 1 << " (0-5): ";
            cin >> grace;

            if (grace > 5)
                grace = 5;

            marks[i] += grace;
        }
    }

    void display() {
        cout << "\nRoll Number: " << rollNumber << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";

        cout << "\nTotal Marks: " << total() << endl;
    }

    friend Result topper(Result, Result, Result);
};

Result topper(Result r1, Result r2, Result r3) {
    if (r1.total() >= r2.total() && r1.total() >= r3.total())
        return r1;
    else if (r2.total() >= r1.total() && r2.total() >= r3.total())
        return r2;
    else
        return r3;
}

int main() {
    Result r1, r2, r3, top;

    cout << "Enter details of Student 1:\n";
    r1.input();

    cout << "\nEnter details of Student 2:\n";
    r2.input();

    cout << "\nEnter details of Student 3:\n";
    r3.input();

    cout << "\nComparison of Student 1 and Student 2:\n";
    r1.compare(r2);

    top = topper(r1, r2, r3);

    cout << "\nTopper Details:\n";
    top.display();

    cout << "\nApplying Grace Marks to Student 1:\n";
    r1.applyGrace();

    cout << "\nResult after Grace Marks:\n";
    r1.display();

    return 0;
}