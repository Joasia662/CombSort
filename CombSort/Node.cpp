#include "Node.h"
#include <iostream>

void Node::Add(Node*& head, int val)
{
	Node* node = new Node;
	node->val = val;
	node->next = head;
	head = node;
}

int Node::Size(Node* head) {
	int size = 0;
	while (head) {
		size++;
		head = head->next;
	}

	return size;
}

void Node::Show(Node* head) {
	while (head) {
		std::cout << head->val << " ";
		head = head->next;
	}
	std::cout << std::endl;
}

Node* Node::SwapElements(Node* element)
{
	Node* tmp = element->next;
	element->next = tmp->next;
	tmp->next = element;

	return tmp;
}

