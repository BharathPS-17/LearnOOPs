// LearnOOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "header.h"

int main()
{
    //Section1: Class Declaration and accessing the objects
   /* Player Indian;
    Player Nz;
    Player *Eng = new Player;

    Indian.name = "Virat";
    Indian.age = 36;
    Indian.avg = 90.01;

    Nz.name = "Williomson";
    Nz.age = 36;
    Nz.avg = 72;

    Eng->name = "Buttler";
    (*Eng).age = 35;
    Eng->avg = 82;

    Indian.DisplayDetails();
    Nz.DisplayDetails();
    Eng->DisplayDetails();

    Indian.getAvg();*/
    //End Section 1

    /** Section 2: Constructor and Destructor**/
    {
        /*Observe here how:
        1. Default Constructor is called  
        2. Destructor is called automatically when program goes out of scope i.e outside this block*/
        ConstructorDestr Account1;
        Account1.set_name("Bharath");
    }
    {
        /* Notice Here :
        1. Order in which constructor are called
        2 Destructor are called in reverse order*/
        ConstructorDestr Account2{ "Pavan" };   //Does not initialise since list initialisation not defined
        Account2.set_name("Pavan");
        ConstructorDestr Account3{ "Rajesh",102 };
        Account3.set_name("Rajesh");
        ConstructorDestr Account4{ "Dinesh",100,120000.32 };
        Account4.set_name("Dinesh");

    }
   

    ConstructorDestr* Account6 = new ConstructorDestr; //Default constructor called.
    ConstructorDestr* Account7 = new ConstructorDestr{ "Vignesh",101, 2345.67 };//Three arg constructor called

    delete Account6;
    delete Account7;

    return 0;
}

