//Printing Linklist in both ways using Recursion
#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;//global variable which can be accessed anywhere
void Insert(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(struct Node* temp){
    if(temp==NULL) return;
    printf("%d",temp->data);
    Print(temp->next);
}
void Rprint(struct Node* temp){
    if(temp==NULL) return;
    Rprint(temp->next);
    printf("%d",temp->data);
}
int main(){
    head = NULL; //empty list;
    Insert(2);
    Insert(4);
    Insert(1);
    Insert(3);
    Insert(6);
    printf("Normal List is:");
    Print(head);
    printf("\nReversed List is :");
    Rprint(head);
}
