#include "Heart.h"

int CHeart::getZdrowie()
{
	return zdrowie;
}

void CHeart::akt_zdrowie(int zmiana)
{
	zdrowie = zdrowie + zmiana;
}

int CHeart::getMaxzdrowie()
{
	return maxzdrowie;
}

int CHeart::getStan()
{
	return stan;
}

int CHeart::getH()
{
	return Hheight;
}

int CHeart::getW()
{
	return Hwidth;
}

void CHeart::akt_poz(int x, int y)
{
	x_pos = x_pos + x;
	y_pos = y_pos + y;
}





