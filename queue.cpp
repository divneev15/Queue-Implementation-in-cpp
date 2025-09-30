// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

#define SIZE 2

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << value << " inserted into Queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front] << " removed from Queue." << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}; // <-- semicolon is mandatory here

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30); // Overflow expected
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue(); // Underflow expected
    q.display();

    return 0;
}

/*
SAMPLE OUTPUT

10 inserted into Queue.
20 inserted into Queue.
Queue Overflow!
Queue elements: 10 20
10 removed from Queue.
Queue elements: 20
20 removed from Queue.
Queue Underflow!
Queue is Empty.
*/
