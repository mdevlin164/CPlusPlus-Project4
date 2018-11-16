#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int size) {
	stck_size = size;
	stck = new int[stck_size];
	tos = 0;
}

Stack::~Stack() {
	delete[]stck;
}

void Stack::push(int item) {
	if (tos == stck_size) {
		cout << "Stack overflow" << endl;
		return;
	}
	stck[tos++] = item;
}

int Stack::pop() {
	if (tos == 0) {
		cout << "Stack underflow" << endl;
		return 0;
	}
	return stck[--tos];
}