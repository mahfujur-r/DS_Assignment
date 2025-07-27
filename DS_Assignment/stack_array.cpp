#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int myStack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        cout << "Stack Overflow\n";
        return;
    }
    myStack[++top] = value;
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return;
    }
    top--;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return -1;
    }
    return myStack[top];
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << myStack[i] << endl;
    }
}

int main() {
    push(5);
    push(6);
    push(10);
    pop();
    display();
    return 0;
}

