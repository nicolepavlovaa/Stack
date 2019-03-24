#include <iostream>
#include "ResizingStack.h"
using namespace std;

bool ResizingStack::empty() const
{
	return top == EMPTY_STACK;
}
bool ResizingStack::full() const
{
	return top >= capacity - 1;
}
int ResizingStack::pop()
{
	if(empty())
	{ 
		cout << "Empty!" << endl;
		return 0;
	}
	return stack[top--];
}
int ResizingStack::peek() const
{
	if (empty())
	{
		cout << "Empty!" << endl;
		return 0;
	}
	return stack[top];
}
void ResizingStack::resize()
{
	int newCapacity = capacity * RESIZE_FACTOR;
	int * temp = new int[newCapacity];
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = stack[i];
	}
	delete[] stack;
	stack = temp;
	capacity = newCapacity;
}
bool ResizingStack::push(int x)
{
	if (full())
	{
		resize();
	}
	stack[++top] = x;
	return true;
}
ResizingStack::ResizingStack()
{
	capacity = INITIAL_CAPACITY;
	stack = new int[capacity];
	top = EMPTY_STACK;
}
ResizingStack::~ResizingStack()
{
	delete[] stack;
}
