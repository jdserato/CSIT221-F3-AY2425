#include <iostream>
using namespace std;
class Student {
	public:
	
	string name;
	int stress;
	int id;
	string course;
	
	// constructor
	Student(string name) {
		cout <<"constructor cALLED" << endl;
		this->name = name;
	}
	
	// destructor
	~Student() {
		cout << "omg" << name<< endl;
	}
};
