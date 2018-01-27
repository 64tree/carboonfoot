#ifndef BICYCLE_H
#define BICYCLE_H

#include "string"
#include "CarbonFootprint.h"

using namespace std;


class bicycle
	:public carbonFootprint
{

public:
	// constructors
	bicycle(){}
	bicycle(string colour, string make, int no_of_gears);

	//virtual int getCarbonFootprint() ;

protected:
	string colour;
	string make;
	int no_of_gears;
};

#endif