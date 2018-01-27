// carboonfoot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CarbonFootprint.h"
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
#include <vector>
#include <iostream>

int main()
{
	vector<carbonFootprint> theWorld;

	car fastcar("Red","BMW" , 122);
	building bigbuilding(3,2,1);
	carbonFootprint * carbon1 = &fastcar;
	
	carbonFootprint * carbon2 = &bigbuilding;

	//theWorld.push_back(*carbon1);
	//theWorld.push_back(*carbon2);

	int theCarbon;

	//for (unsigned i = 0; i<theWorld.size(); i++)
	//{
	//	theWorld.at(i) = theCarbon->getCarbonFootprint();
	//
	//}
		



	//carbon1->set_values(4, 5);
	//carbon2->set_values(4, 5);
	cout << carbon1->getCarbonFootprint()<< '\n';
	cout << carbon2->getCarbonFootprint() << '\n';

	getchar();
	getchar();
	getchar();

    return 0;
}

