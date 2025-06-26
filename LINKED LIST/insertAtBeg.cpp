#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout<<"NULL";
}

int main() {
    Node* head = NULL;
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);
    cout << "Linked List: ";
    printList(head);
    return 0;
}
