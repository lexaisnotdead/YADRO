#pragma once
#include <iostream>

class Stack
{
	char* arr;
	unsigned Capacity;
	unsigned CurrentSize;

public:
	Stack(unsigned Size);
	~Stack();

	void Push(char Value);
	void Pop();
	char Top();

	bool IsFull();
	bool IsEmpty();
};