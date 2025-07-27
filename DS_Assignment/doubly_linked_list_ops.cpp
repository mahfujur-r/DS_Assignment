#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->prev = nullptr;
    newNode->next = head;
    if (head != nullptr)
        head->prev = newNode;
    head = newNode;
}

void insertAtEnd(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;
    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    insertAtEnd(40);
    display();
    return 0;
}
