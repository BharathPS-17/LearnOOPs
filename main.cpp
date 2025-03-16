// LearnOOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "header.h"
#include <vector>

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
    //{
    //    /*Observe here how:
    //    1. Default Constructor is called  
    //    2. Destructor is called automatically when program goes out of scope i.e outside this block*/
    //    ConstructorDestr Account1;
    //    Account1.set_name("Bharath");
    //}
    //{
    //    /* Notice Here :
    //    1. Order in which constructor are called
    //    2 Destructor are called in reverse order*/
    //    ConstructorDestr Account2{ "Pavan" };   //Does not initialise since list initialisation not defined
    //    Account2.set_name("Pavan");
    //    ConstructorDestr Account3{ "Rajesh",102 };
    //    Account3.set_name("Rajesh");
    //    ConstructorDestr Account4{ "Dinesh",100,120000.32 };
    //    Account4.set_name("Dinesh");

    //}
   

    //ConstructorDestr* Account6 = new ConstructorDestr; //Default constructor called.
    //ConstructorDestr* Account7 = new ConstructorDestr{ "Vignesh",101, 2345.67 };//Three arg constructor called

    //delete Account6;
    //delete Account7;
    ////End of Section 2

    /*Section 3: Default Constructor */
    //DefaultConstructor India{"india",25,8.5};   //Default constructor is called, if no other constructor is called this will be default one
    //DefaultConstructor NZ;
    //DefaultConstructor Eng{ "Eng", 12 };
    //DefaultConstructor Afg{ "Afg" };
    // India.set_name("India");
    //cout << India.getname() << endl;

    /*Copy Constructor*/
   // Student Rajesh{ "Rajeshj",69, 10.5 };
   // Student Dinesh{ Rajesh };
   // Dinesh.Getname();
   // Dinesh.Setname("Dinesh");

    /*Shallow Copy constructor*/
    /*ShallowCopy obj1{ 100 };
    cout << "Object 1 value = " << obj1.Getnum() << endl;

    ShallowCopy obj2{ obj1 };
    cout << "Object 2 value = " << obj2.Getnum() << endl;*/
    /*The above code segment will give debug assertion error as Obj2 destructor will clear the pointer and obj1 again
    trying to delete the freed memory, thus we need to go for deep copy*/

    /*Deep Copy contsructor*/

   /* DeepCopy obj1{ 100 };
    DeepCopy obj2{ obj1 };

    cout<< "Object 1 == " << obj1.GetData() << endl;
    cout << "Object 2 == " << obj2.GetData() << endl;*/
    //end of deep copy

    /*Move Constructor*/
   /* vector <MoveConstructor> vec{ 10 };

    vec.push_back( MoveConstructor(20) );*/

    /*Const Classes*/
    const ConstInClasses Bharath{ "Bharath" };
    Bharath.get_name(); //If get_name function is not defined as const then this will give compiler error


    return 0;
}

//Output: