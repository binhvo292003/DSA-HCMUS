#include "linkedList.h"

Node* createNode(int data) {
	Node* pNode = new Node;
	
	pNode->data = data;
	pNode->pNext = NULL;

	return pNode;
}

List* createList(Node* pNode) {
	List* list = new List;
	list->pHead = list->pTail = pNode;
	return list;
}

int amountList(List* list) {
	int n = 0;
	Node* pNode = list->pHead;
	while (pNode != NULL) {
		n++;
		pNode = pNode->pNext;
	}

	return n;
}

bool addHead(List*& list, int data) {
	if (list->pHead == NULL) {
		return false;
	}
	else {
		Node* pNode = createNode(data);
		pNode->pNext = list->pHead;
		list->pHead = pNode;
	}
	return true;
}

bool addTail(List*& list, int data) {
	if (list->pHead == NULL) {
		return false;
	}
	else {
		Node* pNode = createNode(data);
		list->pTail->pNext = pNode;
		list->pTail = pNode;
	}
	return true;
}

void removeHead(List*& list) {
	if (list->pHead == NULL) {
		return;
	}
	else if (list->pHead == list->pTail) {
		Node* tmp = list->pHead;
		list->pHead = list->pTail = NULL;
		delete tmp;
	}
	else {
		Node* tmp = list->pHead;
		list->pHead = list->pHead->pNext;
		delete tmp;
	}

	return;
}

void removeTail(List*& list) {
	if (list->pHead == NULL) {
		return;
	}
	else if (list->pHead == list->pTail) {
		Node* tmp = list->pHead;
		list->pHead = list->pTail = NULL;
		delete tmp;
	}
	else {
		Node* tmp = list->pHead;
		while (tmp->pNext->pNext != NULL) {
			tmp = tmp->pNext;
		}
		delete list->pTail;
		list->pTail = tmp;
	}

	return;
}

void removeAll(List*& list) {
	if (list->pHead == NULL) {
		return;
	}
	else {
		Node* tmp = list->pHead;
		while (tmp != NULL) {
			tmp = tmp->pNext;
			removeHead(list);
		}
		delete list->pTail;
		list->pTail = tmp;
	}

	return;
}

void removeBefore(List*& list, int val) {
	if (list->pHead == NULL) {
		return;
	}
	else {
		if (list->pHead->pNext->data == val) {
			removeHead(list);
		}
		else {
			Node* tmp = list->pHead;
			while (tmp->pNext->pNext->pNext != NULL && tmp->pNext->pNext->data != val) {
				tmp = tmp->pNext;
			}
			if (tmp->pNext->pNext->data == val) {
				Node* remove = tmp->pNext;
				tmp->pNext = tmp->pNext->pNext;
				delete remove;
			}
		}
	}
	return;
}

void removeAfter(List*& list, int val) {
	if (list->pHead == NULL) {
		return;
	}
	else {
		Node* tmp = list->pHead;
		while (tmp->pNext != NULL && tmp->data != val) {
			tmp = tmp->pNext;
		}
		if (tmp->data == val) {
			if (tmp = list->pTail) {
			}
			else {
				Node* remove = tmp->pNext;
				tmp->pNext = tmp->pNext->pNext;
				delete remove;
			}
		}	
	}
	return;
}
bool addPos(List*& list, int data, int pos) {
	if (pos == 1) {
		addHead(list, data);
		return true;
	}
	else {
		int n = amountList(list);
		if (pos > n) {
			return false;
		}
		else {
			Node* pNode = list->pHead;
			n = 1;
			while (n != pos - 1) {
				pNode = pNode->pNext;
				n++;
			}
			Node* tmp = pNode->pNext;
			pNode->pNext = createNode(data);
			pNode->pNext->pNext = tmp;
		}
	}
	return true;
}
void RemovePos(List*& list, int data, int pos);