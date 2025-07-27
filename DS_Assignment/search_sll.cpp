#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

bool search(Node* head, int key)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    int key ;
    cin>>key;
    if (search(head, key))
    {
        cout<<"Found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}