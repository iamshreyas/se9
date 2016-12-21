//============================================================================
// Name        : day1.cpp
// Author      : Shreyas Waghmare
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "stackadt.h"

stack::stack(){
	top = -1;
}

int stack::isfull(){
	if(top == MAX -1)
		return 1;
	else
		return 0;
}
int stack::isempty(){
	if(top == -1)
		return 1;
	else
		return 0;
}
void stack::push(char x){
	top++;
	data[top] = x;
}
char stack::pop(){
	int t = data[top];
	top--;
	return t;
}
