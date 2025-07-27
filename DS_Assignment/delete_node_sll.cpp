#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void deleteFromBeginning() {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromEnd() {
    if (head == nullptr) return;
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr)
        temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void deleteFromPosition(int pos) {
    if (pos == 0) {
        deleteFromBeginning();
        return;
    }
    Node* temp = head;
    for (int i = 0; temp != nullptr && i < pos - 1; i++)
        temp = temp->next;
    if (temp == nullptr || temp->next == nullptr) return;
    Node* to_delete = temp->next;
    temp->next = temp->next->next;
    delete to_delete;
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
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    deleteFromBeginning();
    display();
    deleteFromEnd();
    display();
    deleteFromPosition(1);
    display();
    return 0;
}
