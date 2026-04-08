#include "Catalog.h"
#include <iostream>
using namespace std;

// Constructor: Initializes the catalog as empty
Catalog::Catalog() {
    head = nullptr;
}

// Adds a new book with given ID and title to the end of the catalog
void Catalog::addBook(int id, string title) {
    Book* newBook = new Book{ id, title, nullptr };

    if (head == nullptr) {
        head = newBook; 
    }
    else {
        Book* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // Traverse to the end
        }
        temp->next = newBook; // Append the new book
    }

    cout << "Added book: [" << id << "] " << title << "\n";
}

// Searches for a book by ID and returns a pointer to it (or nullptr if not found)
Book* Catalog::searchBook(int id) {
    Book* temp = head;
    while (temp != nullptr) {
        if (temp->id == id) {
            return temp; // Book found
        }
        temp = temp->next;
    }
    return nullptr; // Not found
}

// Displays all books in the catalog
void Catalog::display() {
    Book* temp = head;
    cout << "Library Catalog:\n";

    if (temp == nullptr) {
        cout << "  (empty)\n";
        return;
    }

    while (temp != nullptr) {
        cout << "  [" << temp->id << "] " << temp->title << "\n";
        temp = temp->next;
    }
}
