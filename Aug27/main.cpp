#include <iostream>
#include "point.h"

struct another {
	int x;
	char* c;
	int y;
	char* a, b;
	int z;
};
using namespace std;

int main(int argc, char** argv) {
	cout << "Size of datatype " << sizeof(another) << endl;
//	long long num = -2147483648;
//	cout << num-1 << endl;
	Point p1;
	p1.x = 2;
	p1.y = 1;
	Point p2 = { 7, 4 };
	Point res = p1.midpoint(p2);
	cout << "(" << res.x << ", " << res.y << ")" << endl;
	res = p2.midpoint(p1);
	cout << "(" << res.x << ", " << res.y << ")" << endl;
	float dist = p1.distance(&p2);
	cout << "Distance: " << dist;
	return 0;
}


