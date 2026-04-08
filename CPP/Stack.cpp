#include "Stack.h"
#include <iostream>
using namespace std;

// Constructor: initialize stack
Stack::Stack() {
    top = -1;
}

// Push book ID onto the stack
void Stack::push(int bookId) {
    if (top < 9) {
        top++;
        arr[top] = bookId;
        cout << "Book ID " << bookId << " has been successfully returned.\n";
    }
    else {
        cout << "Return stack is full.\n";
    }
}

// Pop book ID from the stack
int Stack::pop() {
    if (top == -1) {
        cout << "Return stack is empty.\n";
        return -1;
    }
    return arr[top--];
}

// Display all returned book IDs in the stack
void Stack::display() {
    cout << "Return Stack:\n";
    if (top == -1) {
        cout << "  (empty)\n";
        return;
    }

    for (int i = top; i >= 0; i--)
        cout << "  Book ID: " << arr[i] << "\n";
}
