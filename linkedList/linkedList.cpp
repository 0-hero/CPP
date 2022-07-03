#include "/Users/ram/stdc++.h"
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

void printList(Node* n) {
	while (n!=NULL) {
		cout<<n->data<<" ";
		n = n->next;
	}
}

void pushNode(Node** head_ref, int new_data) {
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data) {
	if (prev_node == NULL) {
		cout<<"Given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void appendNode(Node** head_ref, int new_data) {
	Node* new_node = new Node();

	Node *last = *head_ref;

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL) {
		last = last->next;
	}

	last->next = new_node;
	return;
}

void deleteNode(Node** head_ref, int key) {
	Node* temp = *head_ref;
	Node* prev = NULL;

	if(temp!=NULL && temp->data==key) {
	//TODO Finish break case
		*head_ref = temp->next;
		delete temp;
		return;
	}
	else {
		while(temp!=NULL & temp->data!=key) {
			prev = temp;
			temp = temp->next;
		}
	

		if (temp==NULL) {
			return;
		}	
		prev->next = temp->next;
		delete temp;
	}

}

int main() {
	Node* head = NULL;;

	appendNode(&head, 6);

	pushNode(&head, 7);

	pushNode(&head, 1);

	appendNode(&head, 4);

	insertAfter(head->next, 8);
	
	cout<<"Created Linked list is: ";
	printList(head);
	cout<<endl;

	deleteNode(&head, 4);

	cout<<"List after deleteing node is: ";
	printList(head);
	cout<<endl;

	return 0;
}
