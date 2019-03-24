#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	top = EMPTY_STACK;
}
bool Stack::empty() const
{
	return top == EMPTY_STACK;
}
bool Stack::full() const
{
	return top == maxStack - 1;
}
bool Stack::push(int x)
{
	if (full())
	{
		cout << "Stack is already full!" << endl;
		return false;
	}
	stack[++top] = x;
	return true;
}
int Stack::pop()
{
	if (empty())
	{
		cout << "Stack is already empty!" << endl;
		return 0;
	}
	return stack[top--];
}
int Stack::peek() const
{
	if (empty())
	{
		cout << "Sorry, stack is empty!" << endl;
		return 0;
	}
	return stack[top];
}
