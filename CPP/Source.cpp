#include<iostream>
using namespace std;
#define Size 10
int arr[Size];
int top = -1;

//IsEmpty
int isempty() {
	if (top == -1) {
		return 1;
	}
	return 0;
}
//IsFull
int isfull() {
	if (top == Size - 1) {
		return 1;
	}
	return 0;
}
//Push
void push(int x){
	if (isfull()) {
		cout << "stack is overflow" << endl;
	}
	else {
		top++;
		arr[top] = x;
	}
}
//Pop
int pop() {
	if (isempty()) {
		cout << "stack is underlow" << endl;
	}
	else {
		return arr[top--];
	}
}
//Display
void display() {
	if (isempty()) {
		cout << "stack is underlow" << endl;
	}
	else {
		cout << "elements of stack are: " << endl;
		for (int i = top; i >= 0; i--) {
			cout << arr[i] << endl;
		}
	}
}
//Minimum
int minimum() {
	int min = 0;
	for (int i = top; i >= 0; i--) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;

	}
//maximum
	int maximum() {
		int max = 0;
		for (int i = top; i >= 0; i--) {
			if (max < arr[i]) {
				max = arr[i];
			}
		}
		return max;

	}
	//Average
	int average() {
		int sum = 0;
		for (int i = top; i >= 0; i--) {
			sum += arr[i];
		}
		return sum / (top + 1);
	}



int main() {
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();

}