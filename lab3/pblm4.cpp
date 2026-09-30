// bank account transfer 
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNumber;
    double balance;

public:
    BankAccount(int acc, double bal) : accNumber(acc), balance(bal) {}

    // Member function passing receiver by reference
    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid transfer amount." << endl;
            return;
        }
        if (balance >= amount) {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer successful:" << amount << endl;
        } else {
            cout << "Insufficient balance for transfer." << endl;
        }
    }

    void display() const {
        cout << "Account: " << accNumber << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1(120005578412220, 45222222252522255.0);
    BankAccount acc2(125588779933111, 2000.0);

    cout << "Before Transfer:\n";
    acc1.display();
    acc2.display();

    acc1.transfer(acc2, 1500.0);

    cout << "\nAfter Transfer:\n";
    acc1.display();
    acc2.display();

    return 0;
}