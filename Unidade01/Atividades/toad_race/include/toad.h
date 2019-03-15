/*
? -------------------------------
! file 		toad.h
! author 	Filipe Medeiros and Sara Beatriz.
? news 	    Change Coding-sytle, clean main.
@ date		12/03/2019
? -------------------------------
*/

#ifndef _TOAD_H_
#define _TOAD_H_

class Toad
{
  private:
    int Id;
    int DistanceTravelled;
    int TotalJumps;

  public:
    static int SizeOfTrack;
    int getDistanceTravelled();
    int getTotalJumps();
    void JumpAhead(int DistanceTravelled);

    Toad(int IdNumber)
    {
        DistanceTravelled = 0;
        TotalJumps = 0;
    }
};

void Race(int SizeOfTrack);

#endif
