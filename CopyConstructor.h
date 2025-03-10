#pragma once
#include <iostream>
#include <string>

using namespace std;
class Student
{
	string name;
	int Rollnum;
	double perctg;
public:
	string Getname()
	{
		return name;
	}
	void Setname(string Name)
	{
		name = Name;
	}
	
	//Copy constructor
	Student(const Student& source)
		:name{source.name}, Rollnum{source.Rollnum},perctg{source.perctg}
	{
		/*Const: So to protect the source object from modification
		 Reference: If we pass by value then it copies the content again, which already the job of 
		 copy constructor*/
		cout << "Copyconstructor called" <<name<< endl;
	}
	
	Student(string Name = "Bharath", int Roll = 17, double perc = 98.9);

	~Student()
	{
		cout<< "Destructor called" <<name<< endl;
	}
	
};
