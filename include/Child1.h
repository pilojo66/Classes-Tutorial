#ifndef CHILD1_H
#define CHILD1_H
#include "Parent.h"

class Child : public Parent {
public:
	Child() : Parent() {}
	Child(int f, int g, char h, double i, std::string j) : Parent(f, g, h, i, j) {}
	void genericFunction(void) {
		e = "Child1";
		a = 10;
		b = 11;
		c = 'C';
		d = 12.1;
	}
};

#endif