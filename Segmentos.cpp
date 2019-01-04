#include "Segmentos.h";
#include "CoordenadasXY.h";
#include <iostream>;

Segmentos::Segmentos(CoordenadasXY punto1, CoordenadasXY punto2): puntoA(punto1), puntoB(punto2) {
	std::cout << "Los puntos del segmentos son X: " << puntoA.getX() << " y, Y: " << puntoA.getY() << std::endl;
	std::cout << "Los puntos del segmentos son X: " << puntoB.getX() << " y, Y: " << puntoB.getY() << std::endl;
}
CoordenadasXY Segmentos::puntoMedio(CoordenadasXY punto1, CoordenadasXY punto2) {
	
	CoordenadasXY puntoMedioDelSegmento(((punto1.getX()+punto2.getX())/2), ((punto1.getY() + punto2.getY()) / 2));
	return puntoMedioDelSegmento;
}
CoordenadasXY Segmentos::getPuntoA() {
	return puntoA;
}
CoordenadasXY Segmentos::getPuntoB() {
	return puntoB;
}
Segmentos::Segmentos(){}