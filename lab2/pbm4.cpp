#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b("The Alchemist", "Paulo Coelho");

    b.display();

    return 0;
}