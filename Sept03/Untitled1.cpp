#include <iostream>
#include "course.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void functioncall() {
	Course* c = new Course();
	cout << "Address of course c: " << c << endl;
	Student* s1 = new Student("Mary");
	c->addStudent(s1);
	Student* s2 = new Student("Joseph");
	c->addStudent(s2);
	Student* s3 = new Student("Holy Spirit");
	c->addStudent(s3);
	cout << "Address ni s1s2s3: " <<s1<< " " << s2 << " " << s3 << endl;
	delete c;
}

int main(int argc, char** argv) {
	int i = 1;
	for (int i = 1; i < 10; i++ ) {
		functioncall();
	}
	cout << "Value of i: " << i << endl;
	Student s("Vince");
	s.name = "Vince";
	cout << "Address of s: " <<&s << endl;
	cout << s.name << " is my name" << endl;
	Student* s2, *s1 = new Student("Jay Vince");
//	while (i < 1000) {
//		s1 = new Student("Jesus");
//		s2 = new Student("Christ");
//		cout << "S1 is " << s1->name << " "<< s2->name<< endl;
//		
////		cout << "Address of s1: " << s1 << endl;
////		cout << "Address of s2: " << s2 << endl;
//		i++;
//		delete s1;
//		free(s2);
//	}
	s1->name = "Jay Vince";
	cout << s1->name << " is my name" << endl;
	return 0;
}
