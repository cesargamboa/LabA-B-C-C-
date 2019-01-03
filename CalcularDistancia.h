#pragma once
#include "CoordenadasXY.h"
class CalcularDistancia {
private: 
	double distancia;
public: 
	CalcularDistancia(CoordenadasXY punto1, CoordenadasXY punto2);
	void realizarCalculos(CoordenadasXY, CoordenadasXY);
	bool esParaleloAlEjeY(double, double);
	bool esParaleloAlEjecX(double, double);
	double getDistancia();
};