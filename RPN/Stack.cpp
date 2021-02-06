#include "Stack.h"

Stack::Stack(unsigned Size)
{
	std::cout << this << " is being constructed" << std::endl;
	this->Capacity = Size;
	this->CurrentSize = 0;
	this->arr = new char[this->Capacity];
}

Stack::~Stack()
{
	std::cout << this << " is deconstructed" << std::endl;
	delete[] arr;
}

void Stack::Push(char Value)
{
	if (IsFull())
		std::cout << "STACK OVERFLOW" << std::endl;
	else
	{
		this->arr[this->CurrentSize] = Value;
		this->CurrentSize++;
	}
}

void Stack::Pop()
{
	if (IsEmpty())
		std::cout << "STACK IS EMPTY" << std::endl;
	else
		this->CurrentSize--;
}

char Stack::Top()
{
	return this->arr[this->CurrentSize - 1];
}

bool Stack::IsEmpty()
{
	return this->CurrentSize == 0;
}

bool Stack::IsFull()
{
	return this->CurrentSize == this->Capacity;
}