#pragma once
#include "Segmentos.h"
#include "CoordenadasXY.h"
#include <string>
class Recta {
public:
	Recta(Segmentos nuevoSegmento);
	Recta(double m, double b);
	Segmentos crearRectaConMyB();
	Segmentos crearRectaConSegmento(Segmentos);
	std::string tipoDePendiente(double m);
	std::string esParalelaOPerpendicular(double, double);
	double  getPendiente();


private: 
	double m;
	double b;
	std::string rectaToEcuacionString;
	Segmentos nuevoSegmentoRecta;
};