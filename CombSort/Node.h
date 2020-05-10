#pragma once
class Node
{
public:
	int val;
	Node* next;

	static void Add(Node*& head, int val);
	static int Size(Node* head);
	static void Show(Node* head);
	static Node* SwapElements(Node* element);
};

