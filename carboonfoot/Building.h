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
	building();
	~building();

protected:
	int floors;
	int windows;
	int sq_foot;
};

#endif
