#ifndef __RESIZINGSTACK_H
#define __RESIZINGSTACK_H

const int INITIAL_CAPACITY = 10;
const int EMPTY_STACK = -1;
const int RESIZE_FACTOR = 2;

class ResizingStack {
	int* stack;         
	int top;
	int capacity;     

	bool full() const;
	void resize();

public:
	ResizingStack();
	~ResizingStack();
	
	bool empty() const;
	bool push(int x);
	int pop();
	int peek() const;
};

#endif

