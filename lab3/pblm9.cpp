#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    void input() {
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float totalValue() {
        return price * quantity;
    }

    Product combine(Product p) {
        Product result;

        result.name = name + " + " + p.name;
        result.price = price + p.price;
        result.quantity = quantity + p.quantity;

        return result;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }

    friend Product higherValue(Product, Product);
};

Product higherValue(Product p1, Product p2) {
    if (p1.price * p1.quantity > p2.price * p2.quantity)
        return p1;
    else
        return p2;
}

int main() {
    Product p1, p2, p3, result;

    cout << "Enter details of Product 1:\n";
    p1.input();

    cout << "\nEnter details of Product 2:\n";
    p2.input();

    result = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value:\n";
    result.display();

    p3 = p1.combine(p2);

    cout << "\nCombined Inventory:\n";
    p3.display();

    return 0;
}