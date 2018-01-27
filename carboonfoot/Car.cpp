#include "stdafx.h"
#include "car.h"
#include <string>
using std::string;

car::car(string colour, string make, int top_speed):carbonFootprint(size_of_carbon_footprint)
{
	size_of_carbon_footprint = 12; 
	this->colour = colour;
	this->make = make;
	this->top_speed = top_speed;

}

int car::getCarbonFootprint()
{

	return size_of_carbon_footprint;
}
