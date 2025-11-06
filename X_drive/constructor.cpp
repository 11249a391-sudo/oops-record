#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string bookTitle, string bookAuthor) {
        title = bookTitle;
        author = bookAuthor;
        cout << "Constructor called. Book created: " << title << " by " << author << endl;
    }

    ~Book() {
        cout << "Destructor called. Book \"" << title << "\" by " << author << " is being destroyed." << endl;
    }

    void display() {
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    cout << "Creating book object" << endl;
    Book myBook("1984", "George Orwell");

    cout << "\nDisplaying the book details: " << endl;
    myBook.display();

    return 0;
}
