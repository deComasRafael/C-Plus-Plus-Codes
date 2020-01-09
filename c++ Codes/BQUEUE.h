#ifndef BQUEUE_H
#define BQUEUE_H

class qnode
{
public:
	int item;
	qnode *prev, *next;
};

class BQUEUE
{
public:
	BQUEUE();
	~BQUEUE();
	BQUEUE(const BQUEUE &);
	void Enqueue(int);
	void Dequeue();
	void Print();
private:
	qnode *front;
};

#endif#pragma once
