#include "CoordenadasXY.h"
#include "CalcularDistancia.h"
#include "Segmentos.h";
int main() {
	CoordenadasXY punto(2, 8);
	CoordenadasXY punto2(2, 4);
	CalcularDistancia nuevoCalculo(punto, punto2);
	Segmentos  nuevoSegmento(punto, punto2);
	nuevoSegmento.puntoMedio(punto, punto2);
	CalcularDistancia calculoSegmento(nuevoSegmento.getPuntoA(), nuevoSegmento.getPuntoB());

	return 0;
}