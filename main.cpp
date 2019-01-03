#include "CoordenadasXY.h"
#include "CalcularDistancia.h"
int main() {
	CoordenadasXY punto(2, 8);
	CoordenadasXY punto2(2, 4);
	CalcularDistancia nuevoCalculo(punto, punto2);
	return 0;
}