/* Author:	  Nathan Brannon
*  Name:	  Waypoint class - waypoint.hpp
*Description: Class in use for UAV forge autonomous UAV project to contain, manipulate, and use waypoints set by user from google 
			  	maps interface, linked to javascript through to be added glue code.
*-CHANGE LOG- 
			  -11/5/14 : Created
			  -
*-TO DO-
			  -Implement a store for sotring locations in to database
			  -Have a way to store behaviors for the UAV to follow at the given waypoint
			  -Est Time/power needed to travel to waypoint form a given point (possibly)
			  -Function to send neccesary information to eithe GUI or UAV (This requires further knowledge on what both the GUI and the UAV require)
*-NOTES-
			  This cass is in the very early stages of development.  Most if not al is going to change as more requirements/options are handed down to the 
			  back end team. Nothing currently impletmented is going to neccesarily be in the final product.  any questions/concerns should be directed to author
			  at nbrannon@uci.edu
*/


#ifndef WAYPOINT_HPP
#define WAYPOINT_HPP

#include <iostream>

class mapWaypoint{

public:
	//Constructors both for no input(Error?) and for all three proper inputs
	mapWayPoint();
	mapWayPoint(double initialLocLat , double initiallocLong, double initiallocBear);

	//set functions
	void setLocLong(double newLocLong);
	void setLocLat(double newLocLat);
	void setBearing(double newBearing);

	//Get functions
	double getLocLong();
	double getLocLat();
	double getBearing();

	//Other Functions
	double getDist(double otherLong, double otherLat);
	double bearShift(double nextLong, double nextLat);


private:
	double locLat;
	double locLong;
	double locBear;

};


#endif