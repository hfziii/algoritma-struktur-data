#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void push(Node** head, int new_data){
    Node* new_node      = new Node;
    new_node -> data    = new_data;
    new_node -> next    = (*head);

    (*head) = new_node;
}

void PrintList(Node* node){
    while (node != NULL)
    {
        cout << node -> data << " ";
        node =  node -> next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;

    push(&head, 3);
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);

    cout << "Linked List: ";
    PrintList(head);

    return 0;
}