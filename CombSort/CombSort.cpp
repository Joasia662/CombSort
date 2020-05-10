#include <iostream>
#include "Node.h"
#include "CompSortLogic.h"

using namespace std;

int main()
{
	Node* head = NULL;

	Node::Add(head, 6);
	Node::Add(head, 8);
	Node::Add(head, 9);
	Node::Add(head, 5);
	Node::Add(head, 9);
	Node::Add(head, 3);
	Node::Add(head, 1);
	Node::Add(head, 2);
	cout << "Lista przed posortowaniem : ";
	Node::Show(head);

	CompSortLogic::CombSort(head, Node::Size(head));
	cout << "Lista po posortowaniu :     ";
	Node::Show(head);
	system("pause");
	return 0;
}

