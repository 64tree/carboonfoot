#include "stdafx.h"
#include "CarbonFootprint.h"

using namespace std;


carbonFootprint::carbonFootprint(int size_of_carbon_footprint)
{
	this->size_of_carbon_footprint =size_of_carbon_footprint;


}



int carbonFootprint::getCarbonFootprint() 
{

	return size_of_carbon_footprint;
}