#include "MyObject.h"
#include <iostream>
#include <memory>

void RawPointer();
void SmartPointer();

int main()
{
	std::cout << "============SMART POINTER=============" << std::endl;

	RawPointer();
	SmartPointer();
	std::cout << "===========END=============" <<std::endl;
	system("pause");
	return 0;
}

void RawPointer()
{
	std::cout << "This is a raw pointer approach." << std::endl;
	
	// 1. Create the object
	MyObject* ptr = new MyObject();

	// 2. Do sth with the obj
	ptr->DoSomething();

	// 3. Done with obj. Destroy it.
	delete ptr;
	// This will not be call if there exist exception at previous steps.
	std::cout << std::endl;
}

void SmartPointer()
{
	std::cout << "This is unique_ptr approach." << std::endl;
	{
		std::unique_ptr<MyObject> ptr(new MyObject());
		ptr->DoSomething();
	}// goes out of scope -> ptr will automatically be released. This is same as boost::scoped_ptr

	//ptr->Oops; // ptr is not available here
	std::cout << std::endl;
}