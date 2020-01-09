#include "bqueue.h"
#include <iostream>
using namespace std;

BQUEUE::BQUEUE() : front(NULL)
{
}

BQUEUE::BQUEUE(const BQUEUE &other) : front(NULL)
{
	if (!other.front) return;

	front = new qnode;
	front->item = other.front->item;
	front->next = front->prev = front;

	const qnode *ptr1 = other.front->next;

	while (ptr1 != other.front)
	{
		qnode *pnew = new qnode;
		pnew->item = ptr1->item;
		pnew->next = front;
		pnew->prev = front->prev;
		front->prev->next = pnew;
		front->prev = pnew;
		ptr1 = ptr1->next;
	}
}

BQUEUE::~BQUEUE()
{
	if (!front) return;
	qnode *ptr = front->next;
	while (ptr != front)
	{
		qnode *toDelete = ptr;
		ptr = ptr->next;
		delete toDelete;
	}
	delete front;
}

void BQUEUE::Enqueue(int n)
{
	if (!front)
	{
		front = new qnode;
		front->item = n;
		front->next = front->prev = front;
	}
	else
	{
		qnode *pnew = new qnode;
		pnew->item = n;
		pnew->next = front;
		pnew->prev = front->prev;
		front->prev->next = pnew;
		front->prev = pnew;
	}
}

void BQUEUE::Dequeue()
{
	if (!front) return;
	if (front->next == front) { delete front; front = NULL; return; }
	qnode *toDelete = front;
	front = front->next;
	front->prev = toDelete->prev;
	toDelete->prev->next = front;
	delete toDelete;
}

void BQUEUE::Print()
{
	if (!front) { cout << "(empty)" << endl; return; }
	cout << front->item << " ";
	qnode *ptr = front->next;
	while (ptr != front)
	{
		cout << ptr->item << " ";
		ptr = ptr->next;
	}
	cout << endl;
}