#include "Queue.h"
#include<iostream>
using namespace std;

void Queue::enqueue(int bookId) {
    // Check if there's space to add a new book
    if (rear < 9) {
        if (front == -1) {
            front = 0;  // If queue is empty, set front to 0
        }
        rear++;  // Move rear to next position
        arr[rear] = bookId;  // Add book ID to the queue
        cout << "Borrow request for Book ID " << bookId << " added.\n";
    }
    else {
        cout << "Borrow queue is full.\n";  // Queue is full
    }
}

int Queue::dequeue() {
    // Check if queue is empty
    if (front == -1 || front > rear) {
        cout << "Borrow queue is empty.\n";
        return -1;  // Return -1 if queue is empty
    }
    else {
        return arr[front++];  // Remove book from front and return its ID
    }
}

void Queue::display() {
    cout << "Borrow Queue:\n";
    if (front == -1 || front > rear) {
        cout << "  (empty)\n";  // If queue is empty, display empty message
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << "  Book ID: " << arr[i] << "\n";  // Display each book ID
}

bool Queue::isBookBorrowed(int bookId) {
    for (int i = front; i <= rear; ++i) {
        if (arr[i] == bookId) {
            return true;  // Return true if book is in the queue
        }
    }
    return false;  // Return false if book is not found
}

bool Queue::remove(int bookId) {
    if (front == -1 || front > rear) {
        return false;  // Return false if queue is empty
    }

    bool found = false;
    int newRear = front - 1;

    for (int i = front; i <= rear; i++) {
        if (arr[i] == bookId) {
            found = true;  // Mark book for removal
            continue;
        }
        newRear++;  // Move books that aren't removed
        arr[newRear] = arr[i];
    }

    rear = newRear;  // Update rear after removal
    if (rear < front) {
        front = -1;
        rear = -1;  // Reset queue if empty
    }
    return found;  // Return whether the book was removed
}
