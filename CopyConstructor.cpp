#include "CopyConstructor.h"

Student::Student(string Name, int Roll, double perc)
:name{ Name }, Rollnum{ Roll }, perctg{ perc }
{
	cout << "Three arg const called" << endl;
}
