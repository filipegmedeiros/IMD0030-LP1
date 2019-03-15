#include <bits/stdc++.h> // lib with all libs =c
#include "Amphibia.h"


Anura::Anura()
     :rd(), gen(rd()), dis(1, 5)
{
	Jump = std::round(dis(gen));	
}

Anura::~Anura()
{
}


int Anura::getJumps()
{
	return Jump;
}

int Anura::getTravelled_distance()
{
	return Travelled_distance;
}

int Anura::getDistanceTotal()
{
	return Distance_total;
}


void Anura::setDistance( int distance )
{
	Travelled_distance = distance;
}

int running_track( )
{
    std::cout << "                         ---- !!! Welcome to Toads Race 2019 !!! ----                     " << std::endl;
    std::cout << std::endl;

	while(1)
	{
		std::cout << "Choose Size of Speedway (between 10 and 20000): " << std::endl;
		int size_speedway;
		if (std::cin >> size_speedway) 
        {
        }

        std::cin.clear();
        std::cin.ignore(); //avoid errors with (como é interações em ingles? .-.) 
		
		if( size_speedway >= 10 and size_speedway <= 20000)
		{
			return size_speedway;
		}
		else
		{
			std::cout << "speedway is out of range, please, type write a value in between 50 and 100." << std::endl << std::endl;
		}
	}
}


int accumulated_jumps( int jumper1, int jumper2, int jumper3)
{
	int jumps = 0;
	if( jumper1 >= jumper2 and jumper1 >= jumper3)
	{
		jumps = jumper1;
	}
	else if( jumper2 > jumper1 and jumper2 >= jumper3)
	{
		jumps = jumper2;
	}
	else if( jumper3 > jumper1 and jumper3 > jumper2)
	{
		jumps = jumper1;
	}
	return jumps;
}


void result_race( int jumper1, int jumper2, int jumper3, int jumps_given)
{

// Winners Alone
	if( jumper1 > jumper2 and jumper1 > jumper3 )
	{
        std::cout << "                         ---- !!! WINNER is Rhinella Marina !!! ---- " << std::endl;
		std::cout << "Distance: " <<jumper1 << std::endl;
		std::cout << "Jumps:" << jumps_given << std::endl;
	}
	else if( jumper2 > jumper1 and jumper2 > jumper3 )
	{
        std::cout << "                         ---- !!! WINNER is Bufo Bufo !!! ---- " << std::endl;
		std::cout << "Distance: " << jumper2 << std::endl;
		std::cout << "Jumps:" << jumps_given << std::endl;
	}
	else if( jumper3 > jumper1 and jumper3 > jumper2 )
	{
        std::cout << "                         ---- !!! WINNER is Epidalea Calamita !!! ---- " << std::endl;
		std::cout << "Distance: "<< jumper3 << std::endl;
		std::cout << "Jumps:" << jumps_given<< std::endl;
	}

// Both Winners
	else if( jumper1 > jumper3 and jumper1 == jumper2 )
	{
		std::cout << "Frog 1 and frog 2 drawning" << std::endl;
		std::cout << "Distance: " << jumper1 << std::endl;
		std::cout << "Jumps: " << jumps_given << std::endl;
	}
	else if( jumper2 > jumper1 and jumper2 == jumper3 )
	{
		std::cout << "Frog 2 and frog 3 drawning" << std::endl;
		std::cout << "Distance: " << jumper2 << std::endl;
		std::cout << "Jumps: " << jumps_given << std::endl;
	}
	else if( jumper3 > jumper2 and jumper3 == jumper1 )
	{
		std::cout << "Frog 1 and frog 3 drawning" << std::endl;
		std::cout << "Distance: " << jumper1 << std::endl;
		std::cout << "Jumps: " << jumps_given << std::endl;
	}

// All Winners
	else
	{
		std::cout << "D - R - A - W"<< std::endl << std::endl;
		std::cout << "Distance: " << jumper1 << std::endl;
		std::cout << "Jumps: " << jumps_given << std::endl;
	}

	std::cout << std::endl;

}