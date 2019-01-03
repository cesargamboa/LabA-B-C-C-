#include "CalcularDistancia.h"
#include "CoordenadasXY.h"
#include <math.h>
#include <iostream>

CalcularDistancia::CalcularDistancia(CoordenadasXY pto1, CoordenadasXY pto2) {
	CalcularDistancia::realizarCalculos(pto1, pto2);
}
void CalcularDistancia::realizarCalculos(CoordenadasXY punto1, CoordenadasXY punto2) {
	double X1 = punto1.getX();
	double X2 = punto2.getX();
	double Y1 = punto1.getY();
	double Y2 = punto2.getY();
	// chequear si son paralelos a los ejes
	bool esParaleloAX = CalcularDistancia::esParaleloAlEjecX(X1, X2);
	bool esParaleloAY = CalcularDistancia::esParaleloAlEjecX(Y1, Y2);
	if (esParaleloAX) {
		distancia = Y2 - Y1;
	}
	else if (esParaleloAY) {
		distancia = X2 - X1;
	}
	else {
		distancia = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
	}
	CalcularDistancia::getDistancia();
}
bool CalcularDistancia::esParaleloAlEjecX(double puntoX1, double puntoX2) {
	return (puntoX1 == puntoX2);
}
bool CalcularDistancia::esParaleloAlEjeY(double puntoY1, double puntoY2) {
	return (puntoY1 == puntoY2);
}
double CalcularDistancia::getDistancia() {
	if (distancia < 0) {
		distancia = -distancia;
	}
	std::cout << "La distancia es: " << distancia << std::endl;
	return distancia;
}