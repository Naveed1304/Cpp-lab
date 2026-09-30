#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

public:
    Book(int id, string name, float p)
    {
        bookID = id;
        bookName = name;
        price = p;
        totalBooks++;
    }

    inline float discountPrice()
    {
        return price - (price * 10 / 100);
    }

    bool operator>(Book b)
    {
        return price > b.price;
    }

    friend void displayCostlier(Book b1, Book b2);

    static void displayTotalBooks()
    {
        cout << "Total Books = " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

void displayCostlier(Book b1, Book b2)
{
    if (b1 > b2)
    {
        cout << "Costlier Book:" << endl;
        cout << "ID: " << b1.bookID << endl;
        cout << "Name: " << b1.bookName << endl;
        cout << "Price: " << b1.price << endl;
    }
    else
    {
        cout << "Costlier Book:" << endl;
        cout << "ID: " << b2.bookID << endl;
        cout << "Name: " << b2.bookName << endl;
        cout << "Price: " << b2.price << endl;
    }
}

int main()
{
    Book b1(101, "C++ Basics", 500);
    Book b2(102, "C++ Programming", 700);

    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;

    displayCostlier(b1, b2);

    Book::displayTotalBooks();

    cout << "Discounted Price = " << b2.discountPrice() << endl;

    return 0;
}