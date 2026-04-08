#include <iostream>
#include "Catalog.h"
#include "Queue.h"
#include "Stack.h"
using namespace std;

int main() {
    Catalog catalog;
    Queue borrowQueue;
    Stack returnStack;

    int choice;
    do {
        // Main menu
        cout << "\n===== Library Management Menu =====\n";
        cout << "1. Add New Book\n";
        cout << "2. Search Book by ID\n";
        cout << "3. Borrow Book by ID\n";
        cout << "4. Return Book by ID\n";
        cout << "5. Display Catalog\n";
        cout << "6. Display Borrow Queue\n";
        cout << "7. Display Return Stack\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int id;
        string title;

        switch (choice) {
        case 1:
            // Add new book
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title);
            catalog.addBook(id, title);
            break;
        case 2:
            // Search book by ID
            cout << "Enter Book ID to search: ";
            cin >> id;
            if (Book* book = catalog.searchBook(id))
                cout << "Found: [" << book->id << "] " << book->title << "\n";
            else
                cout << "Book not found.\n";
            break;
        case 3:
            // Borrow book
            cout << "Enter Book ID to borrow: ";
            cin >> id;
            if (catalog.searchBook(id))
                borrowQueue.enqueue(id);
            else
                cout << "Book ID not found in catalog.\n";
            break;
        case 4:
            // Return book
            cout << "Enter Book ID to return: ";
            cin >> id;

            if (borrowQueue.isBookBorrowed(id)) {
                returnStack.push(id);
                borrowQueue.remove(id); // Remove from borrow queue
            }
            else {
                cout << "Book ID " << id << " was not borrowed and cannot be returned.\n";
            }
            break;
        case 5:
            // Show catalog
            catalog.display();
            break;
        case 6:
            // Show borrow queue
            borrowQueue.display();
            break;
        case 7:
            // Show return stack
            returnStack.display();
            break;
        case 0:
            // Exit
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
