#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printReverse(Node* head)
{
    if (head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
}

int main()
{
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    cout << "Elements in reverse order: ";
    printReverse(head);

    return 0;
}