#include "Box.h"

Box::Box() {
	length = 0;
	breadth = 0;
	height = 0;
}

Box::Box(double l, double b, double h) {
	length = l;
	breadth = b;
	height = h;
}

double Box::GetVolume() {
	return length * breadth * height;
}
// :: scope resolution