#pragma once
class CoordenadasXY {
private: 
	double X, Y;
public:
	CoordenadasXY();
	CoordenadasXY(double, double);
	double getX();
	double getY();
	~CoordenadasXY();
};