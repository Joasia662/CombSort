#include "CompSortLogic.h"
#include "BubbleSort.h"
#include "Node.h"
#include <cstddef>

void CompSortLogic::CombSort(Node*& head, int size) {
	
	int gap = size;
	int iterator;
	bool replace = true;
	Node* before = NULL;
	Node* tmp = NULL;
	Node* tmpHead;
	Node* endingElement;
	Node* afterEndingElement = NULL;

	while (gap > 1 || replace)
	{
		gap = gap * 10 / 13;
		gap = gap == 0 ? 1 : gap;
		endingElement = tmpHead = head;
		replace = false;
		if (gap == 1) {
			BubbleSort::sort(head);
			continue;
		}

		while (tmpHead && endingElement->next->next) {
			endingElement = tmpHead;
			iterator = 1;
			while (endingElement->next && iterator < gap) {
				endingElement = endingElement->next;
				iterator++;
			}

			if (tmpHead->val > endingElement->next->val) {
				if (before == NULL)
				{
					tmp = endingElement->next;
					afterEndingElement = tmp->next;
					tmp->next = tmpHead->next;
					endingElement->next = tmpHead;
					tmpHead->next = afterEndingElement;

					tmpHead = tmp;
					head = tmp;
				}
				else
				{
					tmp = endingElement->next;
					afterEndingElement = tmp->next;
					tmp->next = tmpHead->next;
					endingElement->next = tmpHead;
					before->next = tmp;
					tmpHead->next = afterEndingElement;

					tmpHead = tmp;
				}
			}
			before = tmpHead;
			tmpHead = tmpHead->next;
		}
	}
}