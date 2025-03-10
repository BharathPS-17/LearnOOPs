#pragma once
#include <iostream>
#include <string>

using namespace std;
class MoveConstructor
{
	int* data;
public:
	MoveConstructor(int d)
	{
		data = new int;
		*data = d;
		cout << "Constructor called for: " <<*data<< endl;
	}

	MoveConstructor(const MoveConstructor& source)
		:MoveConstructor(*source.data)
	{
		cout << "copy constructor is called for value: " << *data<< endl;
	}

	//Create move constructor
	/*What is the difference between Copy constructor and Move constructor??
	1. Move constructor just moves the data and destroys the original data making it memory efficient
	2. Sytax:
		a) No const?? bcz we need change the value to allot nullptr
		b) rvalue for source with double &&
		c) During initialisation pointer is assigned not data it is pointing to like the Copy constrtr*/
	MoveConstructor(MoveConstructor&& source) noexcept
		:data{ source.data }//Note: Pointer is initialsed not the data for assigning null to it
	{
		source.data = nullptr;
		cout << "Move contructor is called" << endl;
	}

	~MoveConstructor()
	{
		if(data != nullptr)
		{
			cout << "Destructor called for value : " << *data << endl;
		}
		else
		{
			cout << "Destructor called for nullptr" << endl;
		}
		delete data;
		
	}
};

