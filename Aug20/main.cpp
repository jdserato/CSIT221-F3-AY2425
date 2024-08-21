#include <iostream>
#include "arraylist.h"
using namespace std;
int main() {
	List* list = new ArrayList();
	list->add(10);
	list->add(20);
	list->add(30);
	list->add(40);
	list->add(50);
	list->print();
	cout << "2nd elem: "<<list->get(2) <<endl;
	cout << "4th elem: "<<list->get(4) <<endl;
	cout << "Removed 20 at pos " << list->remove(20)<<endl;
	cout << "Removed 25 at pos " << list->remove(25)<<endl;
	list->print();
	cout << "success!";
	return 0;
}
