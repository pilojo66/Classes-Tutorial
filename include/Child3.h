#ifndef CHILD3_H
#define CHILD3_H
#include "Parent.h"

class Child3 : public Parent{
public:
	Child3(int f, int g, char h, double i, std::string j) : Parent(f, g, h, i, j){}
	void genericFuncion(){
		a = 13;
		b = 16;
		c = 'B';
		d = 70.5;
		e = "Child3";
	}
};
#endif