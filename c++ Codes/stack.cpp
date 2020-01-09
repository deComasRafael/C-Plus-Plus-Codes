#include "stack.h"

void linkedStack::push(string value)
{
	//push -> stack
	struct stackNode *temp;
	temp = new stackNode();
	temp->value = value;
	temp->link = (top != 0) ? top : 0;
	top = temp;
}

string linkedStack::pop()
{
	//pop from the stack
	struct stackNode *temp;
	if (top == 0)
		return "\0";
	temp = top;
	string result = temp->value;
	top = top->link;
	delete temp;
	return result;
}