#include "CoordenadasXY.h"
#include <iostream>

CoordenadasXY::CoordenadasXY(double valorX, double valorY) : X(valorX), Y(valorY) {
}
CoordenadasXY::~CoordenadasXY(){}
double CoordenadasXY::getX() {
	return X;
}
double CoordenadasXY::getY() {
	return Y;
}
CoordenadasXY::CoordenadasXY(){}