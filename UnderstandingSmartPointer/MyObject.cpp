#include "MyObject.h"
#include <iostream>

MyObject::MyObject()
{
	std::cout << "Object created." << std::endl;
	data = 1000;
}

MyObject::~MyObject()
{
	data = 0;
	std::cout << "Object released." << std::endl;
}

void MyObject::DoSomething()
{
	std::cout << "Obj size: " << sizeof(MyObject) << std::endl;
	data = 2000;
	//throw new std::exception();
}