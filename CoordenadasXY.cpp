#include "CoordenadasXY.h"
#include <iostream>

CoordenadasXY::CoordenadasXY(double valorX, double valorY) : X(valorX), Y(valorY) {
	std::cout << "Valor de X: " << X << std::endl;
	std::cout << "Valor de Y: " << Y << std::endl;
}
CoordenadasXY::~CoordenadasXY(){}
double CoordenadasXY::getX() {
	return X;
}
double CoordenadasXY::getY() {
	return Y;
}