#include "CoordenadasXY.h"
#include "CalcularDistancia.h"
#include "Segmentos.h";
#include "Recta.h";
int main() {
	// Crear recta usando m y b
	Recta rectaCreadaConMyB(2, 4);
	// Crear recta con un segmento
	//crear punto 1 del segmento
	CoordenadasXY punto(2, 8);
	//crear punto 2 del segmento
	CoordenadasXY punto2(3, 6);
	//crear segmento de recta
	Segmentos segmentoDeRecta(punto, punto2);
	//crear recta
	Recta rectaCreadaConUnSegmento(segmentoDeRecta); 
	//mostrar tipo de pendiente
	rectaCreadaConMyB.tipoDePendiente(rectaCreadaConMyB.getPendiente());
	// mostrar si las dos rectas son paralelas o perpendiculares


	return 0;
}