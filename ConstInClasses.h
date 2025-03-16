#pragma once
#include <string>
#include<iostream>

using namespace std;
class ConstInClasses
{
	string name;
public:
	ConstInClasses(string Name)
		:name{ Name }
	{
		
	}
	/*The const should be used when we know that data is not modified and only used to display 
	If we change the value inside the function after defining it as const then the compiler will
	throw up the error*/
	string get_name() const;
	void set_name(string Name);
		
};

