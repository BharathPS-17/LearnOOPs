#pragma once
#include <iostream>
#include <string>

using namespace std;
class ConstructorDestr
{
private:
	string name;
	int acountnumber{};
	double balance{};

public:
	void set_name(string Name) //Keep argument "Name" different than original attribute "name"
	{
		name = Name;
	}
	ConstructorDestr()//Default constructor
	{
		cout << "default constuctor called" << endl;
	}
	ConstructorDestr(string name, int actnum, double bal)
	{
		cout << "Three arg constuctor called" << endl;
	}
	ConstructorDestr(string name)
	{
		cout << "One arg constuctor called" << endl;
	}
	ConstructorDestr(string name, int actnum)
	{
		cout << "Two arg constuctor called" << endl;
	}
	~ConstructorDestr()
	{
		cout << "Destructor called for object  " <<name<< endl;
	}
		



};

