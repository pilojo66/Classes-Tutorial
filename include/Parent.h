#ifndef PARENT_H
#define PARENT_H
#include <stdio.h>
#include <string>
#include <iostream>

class Parent {
protected:
	int a, b;
	char c;
	double d; 
	std::string e;

public:
	Parent();
	Parent(int f, int g, char h, double i, std::string j) : a(f), b(g), c(h), d(i), e(j) {}
	virtual void genericFunction()=0;
	void printFunction(void) {
		std::cout << "I'm " << this->e << "!" << std::endl;
	}
};

#endif