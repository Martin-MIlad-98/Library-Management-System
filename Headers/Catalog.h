#pragma once
#include <string>
using namespace std;

// Book node for the catalog linked list
struct Book {
    int id;
    string title;
    Book* next;
};

class Catalog {
private:
    Book* head; // Start of the catalog list

public:
    Catalog(); // Constructor

    void addBook(int id, string title); // Add a book to the catalog

    Book* searchBook(int id); // Search for a book by ID

    void display(); // Display all books in the catalog
};
