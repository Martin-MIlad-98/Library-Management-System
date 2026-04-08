#pragma once

// Stack class to store returned book IDs
class Stack {
private:
    int arr[10];  // Array to store book IDs
    int top;      // Index of the top element

public:
    Stack();               // Constructor to initialize stack
    void push(int bookId); // Push a book ID onto the stack
    int pop();             // Pop the top book ID from the stack
    void display();        // Display all returned book IDs in the stack
};
