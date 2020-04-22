#include "Animals.h"

TAnimals::TAnimals()
{
	cvet = 0;
	kolichestvolap = 0;
	kolvosystems = 1;
}
int TAnimals::GetCvet()
{
	return cvet;
}

int TAnimals::GetKolichestvolap()
{
	return kolichestvolap;
}
int TAnimals::GetKolvosystems()
{
	return kolvosystems;
}
void TAnimals::SetKolichestvolap(int k)
{
	if (k > 0 && k < 10)
		kolichestvolap = k;
}
void TAnimals::SetCvet(int c)
{
	cvet = c;
}
const char* TAnimals::Golos()
{
	return "";
}"# project1" 
