#include "/Users/ram/stdc++.h"
using namespace std;
struct Node {
    int data;
    Node* next;
};
 
// Allocates a new node with given data
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
// Function to insert a new node at the
// end of linked list using recursion.
Node* insertEnd(Node* head, int data)
{
    // If linked list is empty, create a
    // new node (Assuming newNode() allocates
    // a new node with given data)
    if (head == NULL)
         return newNode(data);
 
    // If we have not reached end, keep traversing
    // recursively.
    else
        head->next = insertEnd(head->next, data);
    return head;
}

Node* push(Node* head, int data)
{
	if (head==NULL) {
		head = newNode(data);
		return head;
	}
	else {
		Node* new_node = newNode(data);
		new_node->next = head;
		head = new_node;
		return head;
	}
}

Node* insertAfter(Node* head, int val, int data)
{
	if (head->data == val) {
		if (head->next == NULL) {
			Node* temp = newNode(data);
			head->next = temp;
			return head;
		}
		else {
			Node* temp = newNode(data);
			temp->next = head->next;
			head->next = temp;
			return head;
		}
	}
	else {
		head->next = insertAfter(head->next, val, data);
	}
	return head;
}

 
void traverse(Node* head)
{
    if (head == NULL)
       return;
     
    // If head is not NULL, print current node
    // and recur for remaining list  
    cout << head->data << " ";
 
    traverse(head->next);
}
 
// Driver code
int main()
{
    Node* head = NULL;
    head = insertEnd(head, 6);
    head = insertEnd(head, 8);
    head = insertEnd(head, 10);
    head = insertEnd(head, 12);
    head = insertEnd(head, 14);
    head = insertAfter(head, 14, 57);
    head = push(head, 15);
    traverse(head);
}
