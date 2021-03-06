#ifndef CAR_H
#define CAR_H
#include "string"
#include "CarbonFootprint.h"

using namespace std;


class car
	:public carbonFootprint
{

public:
	// constructors
	car() {}
	car(string colour, string make, int top_speed);

	virtual int getCarbonFootprint();

protected:
	string colour;
	int mph;
	int top_speed;
	string make;
	int no_of_gears;
};

#endif
