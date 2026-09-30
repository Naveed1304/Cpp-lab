// employee salary analayasis 
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee() : name(""), salary(0.0) {}
    Employee(string n, double s) : name(n), salary(s) {}

    double getSalary() const { return salary; }
    string getName() const { return name; }

    void display() const {
        cout << "Name: " << name << " | Salary: $" << salary << endl;
    }
};

// Non-member function receiving array of Employee objects
Employee findHighestSalary(Employee empArr[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (empArr[i].getSalary() > empArr[maxIdx].getSalary()) {
            maxIdx = i;
        }
    }
    return empArr[maxIdx];
}

// Non-member function returning a revised Employee object with 10% increment
Employee applyIncrement(Employee e) {
    double newSalary = e.getSalary() * 2.22;
    return Employee(e.getName(), newSalary);
}

int main() {
    Employee employees[3] = {
        Employee("vasu ", 50000),
        Employee("naveed ", 650000),
        Employee("neravv", 58000)
    };

    Employee highest = findHighestSalary(employees, 3);
    cout << "Employee with Highest Salary:\n";
    highest.display();

    Employee revisedBob = applyIncrement(employees[1]);
    cout << "\nRevised Salary Details for Bob:\n";
    revisedBob.display();

    return 0;
}