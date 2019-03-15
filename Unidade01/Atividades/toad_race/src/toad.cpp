/*
? -------------------------------
! file 		toad.cpp
! author 	Filipe Medeiros and Sara Beatriz.
? news    Change Coding-sytle, clean main.
@ date		12/03/2019
? -------------------------------
*/

#include <random>
#include <iostream>
#include "toad.h"

std::random_device rd;
std::default_random_engine gen(rd());
std::uniform_int_distribution<int> dis(1, 10);

int Toad::getDistanceTravelled()
{
  return DistanceTravelled;
}

int Toad::getTotalJumps()
{
  return TotalJumps;
}

void Toad::JumpAhead(int Distance)
{
  DistanceTravelled = DistanceTravelled + dis(gen);
  TotalJumps++;
}

void Race(int SizeOfTrack)
{
  Toad toad_one(1);
  Toad toad_two(2);
  Toad toad_three(3);

  while (true)
  {
    toad_one.JumpAhead(toad_one.getDistanceTravelled());
    toad_two.JumpAhead(toad_two.getDistanceTravelled());
    toad_three.JumpAhead(toad_one.getDistanceTravelled());

    //Encerra o while caso qualquer um dos sapos tenha alcançado o final
    if (toad_one.getDistanceTravelled() >= SizeOfTrack || toad_two.getDistanceTravelled() >= SizeOfTrack || toad_three.getDistanceTravelled() >= SizeOfTrack)
    {
      break;
    }
  }

  int d1 = toad_one.getDistanceTravelled();
  int d2 = toad_two.getDistanceTravelled();
  int d3 = toad_three.getDistanceTravelled();

  if (d1 > d2 && d1 > d3)
  {
    std::cout << "Winner is toad #1" << std::endl;
    std::cout << "Distance: " << toad_one.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_one.getTotalJumps() << std::endl;
  }
  else if (d2 > d1 && d2 > d3)
  {
    std::cout << "Winner is toad #2" << std::endl;
    std::cout << "Distance: " << toad_two.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_two.getTotalJumps() << std::endl;
  }
  else if (d3 > d1 && d3 > d2)
  {
    std::cout << "Winner is toad #3" << std::endl;
    std::cout << "Distance: " << toad_three.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_three.getTotalJumps() << std::endl;
  }
  else if (d1 > d3 && d1 == d2)
  {
    std::cout << "Draw between toad #1 and #2" << std::endl;
    std::cout << "Distance: " << toad_one.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_one.getTotalJumps() << std::endl;
  }
  else if (d1 > d2 && d2 == d3)
  {
    std::cout << "Draw between toad #1 and #3" << std::endl;
    std::cout << "Distance: " << toad_one.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_one.getTotalJumps() << std::endl;
  }
  else if (d2 > d1 && d2 == d3)
  {
    std::cout << "Draw between toad #2 and #3" << std::endl;
    std::cout << "Distance: " << toad_two.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_two.getTotalJumps() << std::endl;
  }
  else
  {
    std::cout << "Draw between toad #1, #2 and #3" << std::endl;
    std::cout << "Distance: " << toad_one.getDistanceTravelled() << std::endl;
    std::cout << "Jumps:" << toad_one.getTotalJumps() << std::endl;
  }
}
