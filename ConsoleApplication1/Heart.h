#pragma once
#include "Object.h"

class CHeart: public CObject
{
private:
	// przechowuje ilosc punktow zycia
	int zdrowie, maxzdrowie;
	//stan okresla tryb serca czerwony lub niebieski
	int stan;
	// wysokosc i szerokosc serca
	int Hheight, Hwidth;
public:

	CHeart(int x, int y,int MZ,int S, int Hh, int Hw): CObject(x,y)
	{
		x_pos = x;
		y_pos = y;
		maxzdrowie = MZ;
		zdrowie = MZ;
		stan = S;
		Hheight = Hh;
		Hwidth = Hw;
	}

	int getZdrowie();
	void akt_zdrowie(int zmiana);
	void akt_poz(int x, int y);
	int getMaxzdrowie();
	int getStan();
	int getH();
	int getW();

};
