#include "Snake.h"
#include <stdlib.h>

TSnake::TSnake() : TReptiles()
{
	cvet = 3;
	kolichestvolap = 0;
	kolvosystems = 3;
}

const char* TSnake::Golos()
{
	return "Sss";
}

int TSnake::teeth()
{
	return 64 + rand() % (80 - 64);
}
bool TSnake::Shell()
{
	return 1;
}"# project1" 
