#include <iostream>
#include "Child1.h"
#include "Child2.h"
#include "Child3.h"
using namespace std;

void PolyEx(Parent*);

int main() {
	Parent * c1 = new Child;
	Parent * C1 = new Child(1, 24, 'o', 23.5, "billy");
	Parent * c2 = new Child2;
	Parent * C2 = new Child2(365, 4657, ';', 3465.23, "bob");
	Parent * c3 = new Child3;
	Parent * C3 = new Child3(2345, 251324, ']', 23451.1243, "fred"); 

	c1->printFunction();
	C1->printFunction();
	c2->printFunction();
	C2->printFunction();
	c3->printFunction();
	C3->printFunction();

	std::cout << "\nUSING FUNCTION!!!\n";
	PolyEx(c1);
	PolyEx(C1);
	PolyEx(c2);
	PolyEx(C2);
	PolyEx(c3);
	PolyEx(C3);
	
	std::cout << "\nUSING GENERIC FUNCTION!!!\n";
	system("PAUSE");
	c1->genericFunction();
	C1->genericFunction();
	c2->genericFunction();
	C2->genericFunction();
	c3->genericFunction();
	C3->genericFunction();
	
	std::cout << "\nREPRINTING VARIABLES!!!\n";
	system("PAUSE");
	c1->printFunction();
	C1->printFunction();
	c2->printFunction();
	C2->printFunction();
	c3->printFunction();
	C3->printFunction();

	

	system("PAUSE");
	return 0;
}

void PolyEx(Parent *kid) {
	cout << "This allows ANY child class of Parent to pass as an argument." << endl;
	cout << "This is: " << kid->getName() << endl;
}