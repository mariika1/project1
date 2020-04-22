#include "Tiger.h" 
#include <stdlib.h>

TTiger::TTiger() : TMammals()
{
	cvet = 3;
	kolichestvolap = 4;
	kolvosystems = 5;
}
const char* TTiger::Golos()
{
	return "Aarrr";
}

const char* TTiger::Eating()
{
	return "meat";
}
double TTiger::Moloco()
{
	return 0.0;
}"# project1" 
