#ifndef BUILDING_H
#define BUILDING_H

#include "string"
#include "CarbonFootprint.h"

using namespace std;


class building
	:public carbonFootprint
{

public:
	// constructors
	building() {}
	building(int floors, int windows , int sq_foot);

protected:
	int floors;
	int windows;
	int sq_foot;
};

#endif
