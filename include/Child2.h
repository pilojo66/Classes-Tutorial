#ifndef CHILD2_H
#define CHILD2_H
#include "Parent.h"

class Child2 : public Parent{
public:
	Child2(int f, int g, char h, double i, std::string j) : Parent(f, g, h, i, j){}
	void genericFunction(){
		a = 14;
		b = 25;
		c = 'F';
		d =	23.5;
		e = "Child2";
	}
};
#endif