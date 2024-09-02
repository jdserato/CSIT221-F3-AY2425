#include <cmath>

struct Point {
	float x;
	float y;
	
	Point midpoint(Point other) {
		Point p;
		int x = 99;
		p.x = (this->x + other.x) / 2.0;
		p.y = (this->y + other.y) / 2.0;
		return p;
	}
	
	float distance(Point* other) {
		float sq_x = pow(other->x - x, 2);
		float sq_y = pow(other->y - y, 2);
		return sqrt(sq_x + sq_y);
	}
};
