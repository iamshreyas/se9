//============================================================================
// Name        : paracheck.cpp
// Author      : Shreyas Waghmare
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stackadt.h"
using namespace std;

int main() {
	char a[MAX];
	int n;
		cout<<"Enter no. of elements";
		cin >> n;
		cout<<"Enter the elements of the array";
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		cout << "\n";
		for(int i = 0; i < n; i++){
			cout<<a[i];
		}
		cout << "\n";
		stack s;
		for(int i = 0; i < n; i++){

			if(a[i] == '{')
				s.push(a[i]);
			else if(a[i] == '}')
				s.pop();
		}
		if(s.isempty()){
			cout<<"Match";
		}
		else{
			cout<<"Mismatch";
		}
	return 0;
}
