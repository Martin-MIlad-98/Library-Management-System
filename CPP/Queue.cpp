#include<iostream>
using namespace std;
#define max_size 10
class Queue
{
    int arr[max_size];
    int rear;
    int front;

public:
    //-----constructor-----
    Queue()
    {

        rear = front = -1;
    }
    //Isempty Function
    int isempty() {
        if (front == -1 || front > rear) {
            return 1;
        }
        return 0;
    }
    //Isfull Function
    int isfull() {
        if (rear == max_size - 1) {
            return 1;
        }
        return 0;
    }
    //Enqueue Function
    void enqueue(int x) {
        if (isfull()) {
            cout << "queue is full" << endl;
        }
        else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            arr[rear] = x;
        }
    }
    //Dequeue Function
    int dequeue() 
    {
        if (isempty()) 
        {
            cout << "Queue is underflow"; 
            return;
        }
        int item = arr[front];
        if (front == rear) 
        {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
        return item;
    }


    //Display Function
    void display()
    {
        if (isempty()) {
            cout << "queue is empty" << endl;

        }
        else {
        
            for (int i = front; i <= rear; i++) {

                cout << arr[i] << endl;
            }
                                  
        }
    }


};
int main() {


}

