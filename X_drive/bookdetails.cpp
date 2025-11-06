#include <iostream>
using namespace std;

// Define the Book class
class Book {
private:
    string title;
    string author;
    float price;

public:
    // Function declarations (defined outside the class)
    void inputDetails();
    void displayDetails();
};

// Function definitions outside the class

void Book::inputDetails() {
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter price: ";
    cin >> price;
    cin.ignore(); // Clear newline from buffer
}

void Book::displayDetails() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Title : " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price : $" << price << endl;
}

// Main function
int main() {
    // Create a Book object
    Book myBook;

    // Input and display book details
    myBook.inputDetails();
    myBook.displayDetails();

    return 0;
}    