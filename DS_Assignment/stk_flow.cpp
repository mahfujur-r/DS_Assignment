#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

class Stack
{
    int arr[SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed to stack." << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); 

    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop(); 

    s.display();

    return 0;
}