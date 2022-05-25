#include <iostream>
#include "Pointer.h"
#include "Recusion.h"
#include "File.h"
#include "linkedList.h"

using namespace std;

int main() {
	List* list = createList(createNode(1));
	addTail(list, 2);
	addTail(list, 3);
	addTail(list, 4);
	addTail(list, 5);
	addTail(list, 6);
	addTail(list, 7);

	addPos(list, 10, 1);

	Node* pNode = list->pHead;

	while (pNode != NULL) {
		cout << pNode->data << endl;
		pNode = pNode->pNext;
	}
	
	system("pause");
	return 0;
}