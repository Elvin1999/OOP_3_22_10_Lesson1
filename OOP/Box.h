#pragma once
class Box {
	double length = 0;
	double breadth = 0;
	double height = 0;
public:
	Box();
	Box(double l, double b, double h);
	double GetVolume();
};