#include "Crocodile.h"
#include <stdlib.h>

TCrocodile::TCrocodile() : TReptiles()
{
	cvet = 2;
	kolichestvolap = 4;
	kolvosystems = 3;
}

const char* TCrocodile::Golos()
{
	return "Sharr";
}

int TCrocodile::teeth()
{
	return 66 + rand() % (80 - 64);
}"# project1" 
