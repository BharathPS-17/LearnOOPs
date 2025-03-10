#pragma once
#include <iostream>
#include <string>

using namespace std;
class DeepCopy
{
	int* data;
public:
	DeepCopy(int d)
	{
		data = new int;
		*data = d;
	}
	//DeepCopy constructor with initialisation inside the boby
	/*DeepCopy(const DeepCopy& source)
	{
		data = new int;
		*data = *source.data;
		cout << "Deep copy" << endl;
	}*/

	//DeepCopy using Constructor Delegation
	DeepCopy(const DeepCopy& source)
		:DeepCopy(*source.data)//Note the dererenced data is passed
	{
		cout << "Deepcopy using constructor delegation initialisation method" << endl;
	}
	~DeepCopy()
	{
		delete data;
		cout << "destructor called" << endl;
	}

	int GetData()
	{
		return *data;
	}
	
};

