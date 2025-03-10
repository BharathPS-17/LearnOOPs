#pragma once
#include <iostream>
#include <string>
class DefaultConstructor
{
private:
	string country_name;
	int total_states;
	double growth_rate;
public:
	void set_name(string name)
	{
		country_name = name;
	}
	string getname() { return country_name; }

	//When this default constructor is called attributes are always initialised to values given below.
	/*DefaultConstructor()
	{
		country_name = "India";
		total_states = 30;
		growth_rate = 6.4;

	}*/
	//DefaultConstructor(string name, int states, double growth)
	//{
	//	/* NOTE: If you create object "DefaultConstructor India;" will throw error bcz user has to call 3 argument constructor only or
	//	Option1 => Define default constructor explicitly
	//	option2 => Create 3 arg object Eg;-DefaultConstructor India {"India", 30, 6.4} */
	//	country_name = name;
	//	total_states = states;
	//	growth_rate = growth;
	//}
	
	///*List Initialisation: Instead of assiging in the body, we can initialise the attribute using list initialisation*/
	DefaultConstructor(string name = "India", int states =30, double growth = 10.5)
		: country_name{ name }, total_states{ states }, growth_rate{growth} {
		//No need of initialising here
		//This is the most efficient way of initialising
		//order of initialisation does not matter as initialisation will happen with the order in which attributes are defined
	}
	//DefaultConstructor(string name, int states)
	//	: total_states{ states }, country_name{ name }, growth_rate{0} {
	//	//Best practice is to initialise in proper order. Dont do this
	//}

	/***********Delegating Constructor initialisation************/
	//Since initialisation is repeated we can optimise it by delegating it to another constructor
	//DefaultConstructor()
	//	:DefaultConstructor{"NZ",10, 15.5} {
	//	//Here the 3 Arg constructor is called first and initialisation is carried out.
	//	//Default constructor delegating initialisation to 3 Arg constructor
	//}

	/*************Default Parameter Constructor*******************/
	//DefaultConstructor(string name = "India", int state = 30, double growth = 10.5) {};
	//Here we have initialised default parameter values and we can call any constructor it will have above value

};

