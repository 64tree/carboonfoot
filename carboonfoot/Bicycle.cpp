#include "stdafx.h"
#include "Bicycle.h"


using namespace std;

bicycle::bicycle(string colour, string make, int no_of_gears) :carbonFootprint(size_of_carbon_footprint)
{
	size_of_carbon_footprint = 1;
	this->colour = colour;
	this->make = make;
	this->no_of_gears = no_of_gears;

}

int bicycle::getCarbonFootprint()
{
	return size_of_carbon_footprint;
}

