
#include "BubbleSort.h"
#include "Node.h"
#include <cstddef>


 void BubbleSort::sort(Node*& head) {
	Node* tmp = head;
	Node* innerTmp = head;
	Node* beforeNext = NULL;
	
	bool isSorted = true;

	while (tmp->next) {
		if (tmp->val > tmp->next->val) {
			isSorted = false;
			break;
		}
		tmp = tmp->next;
	}

	if (isSorted)
		return;

	tmp = head;

	while (tmp->next) {
		while (innerTmp->next) {
			if (innerTmp->val > innerTmp->next->val) {
				if (innerTmp == head) {

					head = Node::SwapElements(head);
					beforeNext = head;
					innerTmp = head->next;
				}
				else {

					beforeNext->next = Node::SwapElements(innerTmp);
					innerTmp = beforeNext->next->next;
					beforeNext = beforeNext->next;
				}
			}
			else {
				beforeNext = innerTmp;
				innerTmp = innerTmp->next;
			}
		}

		tmp = tmp->next;
		innerTmp = head;
	}

	/* Node* tmp = head;
	 Node* next;
	 while (tmp && tmp->next)
	 {
		 next = tmp->next;
		 while (next)
		 {
			 if (tmp->val > next->val)
			 {
				 Node::SwapElements(tmp, next);
			 }
			 next = next->next;
		 }

		 tmp = tmp->next;
	 }*/

 }
	 
