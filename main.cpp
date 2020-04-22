#include "Animals.h"
#include "Mammals.h"
#include "Tiger.h"
#include "Koala.h"
#include "Reptiles.h"
#include "Crocodile.h"
#include "Snake.h"

#include <iostream>
using namespace std;


int main()
{
	TAnimals newAnimal;
	newAnimal.SetCvet(10);
	newAnimal.SetKolichestvolap(2);
	cout << "Kolichestvolap= " << newAnimal.GetKolichestvolap() << endl;
	TMammals newMammal;
	newMammal.SetSherst(true);
	newMammal.SetCvet(4);
	newMammal.SetKolichestvolap(4);
	cout << "newMammal says" << newMammal.Golos() << endl;
	TTiger Shirkhan;
	cout << "Shirkhan says " << Shirkhan.Golos() << endl;
	cout << "Shirkhan is eating " << Shirkhan.Eating() << endl;
	cout << "Kolichestvolap= " << Shirkhan.GetKolichestvolap() << endl;
	TKoala Koyl;
	cout << "Koyl says " << Koyl.Golos() << endl;
	cout << "Koyl echo " << Koyl.Echo() << endl;
	cout << "Kolichestvolap= " << Koyl.GetKolichestvolap() << endl;
	TReptiles newReptilia;
	newReptilia.SetSscale(true);
	newReptilia.SetCvet(3);
	newReptilia.SetKolichestvolap(4);
	cout << "newReptilia says " << newReptilia.Golos() << endl;
	TCrocodile Gena;
	cout << "Gena says " << Gena.Golos() << endl;
	cout << "Gena have " << Gena.teeth() << " teeth" << endl;
	TSnake Ka;
	cout << "Ka says " << Ka.Golos() << endl;
	cout << "Ka have " << Ka.teeth() << " teeth" << endl;
	cout << "Ka have " << Ka.Shell() << "shell" << endl;

	TMammals** zoo = 0;
	int numberOfAnimals = 0;
	cout << "number of animals = " << endl;
	cin >> numberOfAnimals;
	zoo = new TMammals * [numberOfAnimals];
	for (int i = 0; i < numberOfAnimals; i++)
	{
		cout << "Which one? " << endl;
		int a;
		cin >> a;
		if (a == 0)
			zoo[i] = new TKoala();
		else
			zoo[i] = new TTiger();
		cout << "Kolichestvolap = " << zoo[i]->GetKolichestvolap() << endl;
		cout << "Givotnoe " << i << "govorit " << zoo[i]->Golos() << endl;
		break;
	}
	TReptiles** zoo_1 = 0;
	int numberOfAnimals_1;
	cout << "number of animals_1 = " << endl;
	cin >> numberOfAnimals_1;
	zoo_1 = new TReptiles * [numberOfAnimals_1];
	for (int i = 0; i < numberOfAnimals_1; i++)
	{
		cout << "Which one? " << endl;
		int b;
		cin >> b;
		if (b == 0)
			zoo_1[i] = new TCrocodile();
		else
			zoo_1[i] = new TSnake();
		cout << "Kolichestvolap = " << zoo_1[i]->GetKolichestvolap() << endl;
		cout << "Givotnoe " << i << "govorit " << zoo_1[i]->Golos() << endl;
	}
	return 0;
}"# project1" 
