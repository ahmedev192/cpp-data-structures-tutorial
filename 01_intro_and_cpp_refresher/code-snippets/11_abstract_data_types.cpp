/*
 * 11 - Abstract Data Types
 * Simple stack implementation
 */

#include <iostream>
using namespace std;

class Stack {
private:
    int data[100];
    int top;
    
public:
    Stack() {
        top = -1;  // Empty stack
    }
    
    // Push element onto stack
    void push(int value) {
        if (top < 99) {
            top++;
            data[top] = value;
            cout << "Pushed: " << value << endl;
        } else {
            cout << "Stack overflow!" << endl;
        }
    }
    
    // Pop element from stack
    int pop() {
        if (top >= 0) {
            int value = data[top];
            top--;
            cout << "Popped: " << value << endl;
            return value;
        } else {
            cout << "Stack underflow!" << endl;
            return -1;
        }
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
    
    // Get top element
    int peek() {
        if (top >= 0) {
            return data[top];
        }
        return -1;
    }
    
    // Display stack
    void display() {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    
    // Push elements
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    // Display stack
    stack.display();
    
    // Pop elements
    stack.pop();
    stack.pop();
    
    // Display stack
    stack.display();
    
    // Check if empty
    cout << "Is empty: " << (stack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}

/*
 * Expected Output:
 * Pushed: 10
 * Pushed: 20
 * Pushed: 30
 * Stack: 10 20 30 
 * Popped: 30
 * Popped: 20
 * Stack: 10 
 * Is empty: No
 */

/*
 * TASK: Create a simple Queue class with enqueue and dequeue operations.
 * Use an array to store elements and track front and rear.
 * 
 * ANSWER:
 * #include <iostream>
 * using namespace std;
 * 
 * class Queue {
 * private:
 *     int data[100];
 *     int front, rear;
 * 
 * public:
 *     Queue() {
 *         front = rear = -1;
 *     }
 *     
 *     void enqueue(int value) {
 *         if (rear < 99) {
 *             data[++rear] = value;
 *             if (front == -1) front = 0;
 *             cout << "Enqueued: " << value << endl;
 *         }
 *     }
 *     
 *     int dequeue() {
 *         if (front <= rear && front != -1) {
 *             int value = data[front++];
 *             cout << "Dequeued: " << value << endl;
 *             return value;
 *         }
 *         return -1;
 *     }
 * };
 * 
 * int main() {
 *     Queue q;
 *     q.enqueue(10);
 *     q.enqueue(20);
 *     q.dequeue();
 *     return 0;
 * }
 */