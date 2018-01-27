#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

using namespace std;


class carbonFootprint
{


public:
	// constructors
	carbonFootprint() {}  // default constructor
	carbonFootprint(int size_of_carbon_footprint);


	//int getCarbonFootprint();
	//pure virtual function this class would not be able to be made  
	virtual int getCarbonFootprint() = 0; 

protected: 

	int size_of_carbon_footprint;



};

#endif