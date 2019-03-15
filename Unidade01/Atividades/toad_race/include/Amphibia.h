#ifndef _AMPHIBIA_H_
#define _AMPHIBIA_H_

#include <random>

class Anura 
{
private:
    int Travelled_distance;
	int Jump;

	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;

public:
    Anura();
    Anura( int, int );
    ~Anura();
    
    //is not a static data member of ‘class Anura’ anura::Distance_total(0);
	static int Distance_total;
	void setDistance( int );     
   
    int getDistanceTotal();
    int getTravelled_distance();
	int getJumps();
		
};


int running_track();

int accumulated_jumps( int jumper1, int jumper2, int jumper3);


void result_race( int jumper1, int jumper2, int jumper3, int jumps_given);

#endif

