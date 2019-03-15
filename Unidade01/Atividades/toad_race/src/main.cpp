#include <iostream>
#include "Amphibia.h"
using namespace std;

int Anura::Distance_total(0);

int main(int argc, char *argv[])
{
	int track_distance;


	track_distance = running_track();

    //starting frogsssssssssssss
	Anura Rhinella_marina;
	Anura Bufo_bufo;
	Anura Epidalea_calamita;

    //iniciate distances
	Rhinella_marina.setDistance(0);
	Bufo_bufo.setDistance(0);
	Epidalea_calamita.setDistance(0);
	
    //iniciate jumps
    int jumps_given = 0;


	while( Anura::Distance_total < track_distance)
	{
		int jumper1 = 0, jumper2 = 0, jumper3 = 0;

		jumps_given++;
		
		Rhinella_marina.setDistance(Rhinella_marina.getTravelled_distance() + Rhinella_marina.getJumps());
		Bufo_bufo.setDistance(Bufo_bufo.getTravelled_distance() + Bufo_bufo.getJumps());
		Epidalea_calamita.setDistance(Epidalea_calamita.getTravelled_distance() + Epidalea_calamita.getJumps());

		jumper1 = Rhinella_marina.getTravelled_distance();
		jumper2 = Bufo_bufo.getTravelled_distance();
		jumper3 = Epidalea_calamita.getTravelled_distance();


		
		Anura::Distance_total = accumulated_jumps( jumper1, jumper2, jumper3);
		
	}

	int Marina = 0, Bufo = 0, Calamita = 0;
	Marina = Rhinella_marina.getTravelled_distance();
	Bufo = Bufo_bufo.getTravelled_distance();
	Calamita = Epidalea_calamita.getTravelled_distance();
	

	result_race( Marina, Bufo, Calamita, jumps_given);

	return 0;
}


