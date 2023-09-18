#include <iostream>
using namespace std;
// Node class representing each element in the stack
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Stack class implementing the stack operations
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to the stack." <<endl;
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop an element." <<endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        cout << poppedValue << " popped from the stack." <<endl;
    }

    // Get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << std::endl;
            return -1; // or throw an exception
        }

        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();
    stack.pop();

    cout << "Top element: " << stack.peek() << std::endl;

    return 0;
}

