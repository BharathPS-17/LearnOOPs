#pragma once
#include <iostream>
#include <string>

using namespace std;

/*In this Copy constructor has a pointer as data member
1.When the object of the class Shallowcopy is copied, both source object and copied
object will point towards same memory address.
2. Bcz of this when one object goes out of scope a destrutor is called and pointer data is deleted
But copied object still points towards freed address.
3. This is a big issue and same is addressed using deep copy*/
class ShallowCopy
{
	int *data;
public:
	ShallowCopy(int d)
	{
		data = new int;
		*data = d;
	}
	ShallowCopy(const ShallowCopy& source)
		:data{source.data}
	{
		cout << "Copy constructor called" << endl;
	}

	int Getnum();

	~ShallowCopy();



};

