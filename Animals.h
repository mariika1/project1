#pragma once
#ifndef _Animals_h_
#define _Animals_h_

class TAnimals
{
protected:
	int cvet;
	int kolichestvolap;
	int kolvosystems;
public:
	TAnimals();
	int GetCvet();
	int GetKolichestvolap();
	int GetKolvosystems();

	void SetKolichestvolap(int k);
	void SetCvet(int c);
	const char* Golos();
};
#endif"# project1" 
