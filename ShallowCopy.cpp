#include "ShallowCopy.h"

ShallowCopy::~ShallowCopy()
{
	delete data;
	cout << "Destructor called" << endl;
}
int ShallowCopy::Getnum()
{
	return (*data);
}
