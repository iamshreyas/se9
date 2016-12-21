/*
 * stack.h
 *
 *  Created on: 21-Dec-2016
 *      Author: pict
 */

#ifndef STACK_H_
#define STACK_H_
#define MAX 20

class stack{
	int data[MAX];
	int top;
public:
	stack();
	int isfull();
	int isempty();
	void push(char x);
	char pop();
};


#endif /* STACK_H_ */
