#ifndef STACK_H

#define STACK_H

#include <string>

using namespace std;

//Structured stack node

struct stackNode

{
	string value;
	struct stackNode *link;
};

//Link stack

class linkedStack

{
	struct stackNode *top;

public:

	linkedStack()

	{
		top = 0;
	}

	//Member functions
	void push(string value);
	string pop();
};

#endif

#pragma once
