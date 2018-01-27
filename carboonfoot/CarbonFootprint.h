#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

using namespace std;


class carbonFootprint
{


public:
	// constructors
	carbonFootprint() {}  // default constructor
	carbonFootprint(int size_of_carbon_footprint);


	int getCarbonFootprint();

protected: 

	int size_of_carbon_footprint;



};

#endif