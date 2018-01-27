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
	//create object of pointers of carbon footprints 
	vector<carbonFootprint*> theWorld;

	//make the objects 
	car fastcar("Red","BMW" , 122);
	building bigbuilding(3,2,1);
	bicycle poshbike("Silver", "Bordman", 62);

	// set addresses of objects 
	carbonFootprint * carbon1 = &fastcar;
	carbonFootprint * carbon2 = &bigbuilding;
	carbonFootprint * carbon3 = &poshbike;

	//push addresses to the vector of objects 
	theWorld.push_back(carbon1);
	theWorld.push_back(carbon2);
	theWorld.push_back(carbon3);

	

	//get the carbon footprint values printed to screen
	for (unsigned i = 0; i<theWorld.size(); i++)
	{
		
		cout << theWorld.at(i)->getCarbonFootprint()<< '\n';
	
	}


	getchar();

    return 0;
}

