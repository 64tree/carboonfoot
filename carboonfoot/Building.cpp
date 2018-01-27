#include "stdafx.h"
#include "Building.h"


using namespace std;

building::building(int floors, int windows, int sq_foot):carbonFootprint(size_of_carbon_footprint)
{
	size_of_carbon_footprint = 1092;
	this->floors = floors;
	this->windows = windows;
	this->sq_foot = sq_foot;

}

int building::getCarbonFootprint()
{

	return size_of_carbon_footprint;
}
