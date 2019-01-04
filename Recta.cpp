#include "Recta.h"
#include "Segmentos.h"
#include <iostream>
#include "CoordenadasXY.h"

Recta::Recta(Segmentos nuevoSegmento):nuevoSegmentoRecta(nuevoSegmento) {
	crearRectaConSegmento(nuevoSegmento);
}
Recta::Recta(double pend, double bValue): m(pend), b(bValue) {
	Recta::crearRectaConMyB();
}
Segmentos Recta::crearRectaConMyB() {
	//y = mx+b
	double x=0;
	double y;
	y = b;
	x = ((y - b) / m);
	// creacion de punto origen
	CoordenadasXY punto(0, 0);
	CoordenadasXY punto2(x, y);
	std::cout << "La ecuacion de la recta es: " << "y = " << m << "x +" << b << std::endl;
	std::cout << "Los valores obtenidos de x y y, son: (" << x <<", "<< y << "), respectivamente" << std::endl;

	return Segmentos(punto, punto2);
}
Segmentos Recta::crearRectaConSegmento(Segmentos segmentoPorParametro) {
	double X1 = segmentoPorParametro.getPuntoA().getX();
	double Y1 = segmentoPorParametro.getPuntoA().getY();
	double X2 = segmentoPorParametro.getPuntoB().getX();
	double Y2 = segmentoPorParametro.getPuntoB()
		.getY();
	// calculo de la pendiente de recta
	m = (Y2 - Y1) / (X2 - X1);
	b = Y2 - (m*X2);
	std::cout << "La ecuacion de la recta es: ";
	std::cout << "y = " << m << "x + " << b << std::endl;
	return segmentoPorParametro;
}
std::string Recta::tipoDePendiente(double pendiente) {
	if (pendiente == 0) {
		return "la recta es vertical";
		std::cout << std::endl;;
	}
	else if (pendiente < 0) {
		return "la recta es decreciente";
		std::cout << std::endl;;
	}
	else {
		return "La recta es creciente";
		std::cout << std::endl;;
	}

}
double Recta::getPendiente() {
	return m;
}
std::string Recta::esParalelaOPerpendicular(double m1, double m2) {
	if ((m1*m2) == -1) {
		return "Las rectas son perpendiculares";
		std::cout << std::endl;;
	}
	else if (m1 == m2) {
		return "Las rectas son paralelas";
		std::cout << std::endl;;
	}
	else {
		return "Las rectas no son ni paralelas, ni perpendiculares";
		std::cout << std::endl;;
	}
}