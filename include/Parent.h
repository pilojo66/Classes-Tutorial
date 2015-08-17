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
	Parent() { a = 2; b = 4; c = 'P'; d = 234.12; e = "Parent"; }
	Parent(int f, int g, char h, double i, std::string j) : a(f), b(g), c(h), d(i), e(j) {}
	virtual void genericFunction()=0;
	void printFunction(void) {
		std::cout << "I'm " << this->e << "!" << std::endl
			<< "With ints: " << this->a << " and " << this->b << std::endl
			<< "A char: " << this->c << std::endl
			<< "and a double of: " << this->d << std::endl << std::endl;
	}
	std::string getName(void) {
		return this->e;
	}
};

#endif