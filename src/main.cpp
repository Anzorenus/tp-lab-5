#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "dean.h"

int main()
{
	Dean *dean = new Dean();

	dean->setMarks();
	//cout << dean->findGroup("18-���")->averageMark() << endl;
	dean->setHeads();
	//cout << dean->findGroup("18-���")->findStudent(3)->getName() << endl;

	dean->allocation();
	dean->transfer("18-���", "18-��");
	dean->statistics();
	dean->savingData();

	delete dean;
	return 0;
}