#ifndef __STACK_H
#define __sTACK_H
#include <iostream>

const int maxStack = 200;
const int EMPTY_STACK = -1;

class Stack
{
	int stack[maxStack];
	int top;

public:
	Stack(); //Constructor
	bool full() const;  //check if stack is full
	bool empty() const; //check if stack is empty
	bool push(int x); //check if push was a success
	int pop();
	int peek() const; //peek at last element
};

#endif 

