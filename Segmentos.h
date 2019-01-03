#pragma once
#include "CoordenadasXY.h"
class Segmentos {
private: 
	CoordenadasXY puntoA;
	CoordenadasXY puntoB;
public: 
	Segmentos(CoordenadasXY pt0, CoordenadasXY pt1);
	CoordenadasXY puntoMedio(CoordenadasXY, CoordenadasXY);
	CoordenadasXY getPuntoA();
	CoordenadasXY getPuntoB();
};