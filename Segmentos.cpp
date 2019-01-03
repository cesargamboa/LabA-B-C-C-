#include "Segmentos.h";
#include "CoordenadasXY.h";
#include <iostream>;

Segmentos::Segmentos(CoordenadasXY punto1, CoordenadasXY punto2): puntoA(punto1), puntoB(punto2) {
	std::cout << "Los puntos del segmentos son X: " << puntoA.getX() << " y, Y: " << puntoA.getY() << std::endl;
	std::cout << "Los puntos del segmentos son X: " << puntoB.getX() << " y, Y: " << puntoB.getY() << std::endl;
}