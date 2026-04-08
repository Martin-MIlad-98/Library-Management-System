#pragma once

// Queue for managing borrowed book IDs
class Queue {
private:
    int arr[10];             // Fixed-size array for queue
    int front = -1, rear = -1; // Queue pointers

public:
    void enqueue(int bookId);       // Add book ID to queue
    int dequeue();                  // Remove and return front book ID
    void display();                 // Show all book IDs in queue
    bool isBookBorrowed(int bookId); // Check if book ID is in queue
    bool remove(int bookId);        // Remove specific book ID
};
