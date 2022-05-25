#pragma once
#include <iostream>

using namespace std;

struct Node {
	int data; 
	Node* pNext;
};

struct List {
	Node* pHead;
	Node* pTail;
};

Node* createNode(int data);
List* createList(Node* pNode);
bool addHead(List*& list, int data);
bool addTail(List*& list, int data);
void removeHead(List*& list);
void removeTail(List*& list);
void removeAll(List*& list);
void removeBefore(List*& list, int val);
void removeAfter(List*& list, int val);
bool addPos(List*& list, int data, int pos);
void RemovePos(List*& list, int data, int pos);