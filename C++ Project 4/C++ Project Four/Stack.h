#pragma once
#ifndef STACK_H
#define STACK_H

class Stack {
public:
	Stack(int size);
	Stack(const Stack& st);
	~Stack();

	void push(int item);
	int pop();

private:
	int stck_size;
	int* stck;
	int tos;
};
#endif