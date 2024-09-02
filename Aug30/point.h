#include <cmath>

struct Point {
	int x, y;
	
	Point midpoint(Point other) {
		Point mid;
		mid.x = (this->x + other.x) / 2;
		mid.y = (this->y + other.y) / 2;
		return mid;
	}
	 
	float distance(Point* other) {
		int x_sq = pow(x - other->x, 2);
		int y_sq = pow(y - other->y, 2);
		return sqrt(x_sq + y_sq);
	}
};
