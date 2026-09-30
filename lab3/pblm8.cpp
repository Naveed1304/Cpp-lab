#include <iostream>
using namespace std;

class Book {
    int bookID;
    string title;
    int copies;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Number of Copies: ";
        cin >> copies;
    }

    void exchange(Book &other) {
        swap(bookID, other.bookID);
        swap(title, other.title);
        swap(copies, other.copies);
    }

    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Copies: " << copies << endl;
    }

    friend Book moreCopies(Book, Book);
};

Book moreCopies(Book b1, Book b2) {
    if (b1.copies > b2.copies)
        return b1;
    else
        return b2;
}

int main() {
    Book b1, b2, result;

    cout << "Enter details of Book 1:\n";
    b1.input();

    cout << "\nEnter details of Book 2:\n";
    b2.input();

    cout << "\nBefore Exchange:\n";
    b1.display();
    cout << endl;
    b2.display();

    b1.exchange(b2);

    cout << "\nAfter Exchange:\n";
    b1.display();
    cout << endl;
    b2.display();

    result = moreCopies(b1, b2);

    cout << "\nBook with More Copies:\n";
    result.display();

    return 0;
}