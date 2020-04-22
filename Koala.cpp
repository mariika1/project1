#include "Koala.h"
#include <stdlib.h>


TKoala::TKoala() : TMammals()
{
	cvet = 1;
	kolichestvolap = 4;
	kolvosystems = 3;
}
const char* TKoala::Golos()
{
	return "Mff";
}
int TKoala::Echo()
{
	return 60 + rand() % (100 - 60);
}
double TKoala::Moloco()
{
	return 0.0;
}"# project1" 
"# project1" 
