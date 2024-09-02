#include <iostream>
#include <iomanip>
#include "point.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Point p1 = { 2, 1 };
	Point p2 = { 8, 5 };
	Point mid = p1.midpoint(p2);
	cout << mid.x << " " << mid.y << endl;
	cout << fixed << setprecision(2) << "Distance: " << p1.distance(&p2);
	return 0;
}
