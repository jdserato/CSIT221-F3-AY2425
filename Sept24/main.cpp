#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	cout << sizeof(node);
	LinkedList* list = new LinkedList();
	list->add(1);
	list->add(3);
	list->addHead(5);
	list->add(7);
	list->print();
//	cout << "3rd elem: " << list->get(3) << endl;
//	cout << "1st elem: " << list->get(1) << endl;
	cout << "Remove Head at : " << list->removeHead() << endl;
//	list->print();
//	cout << "Remove head : " << list->removeHead() << endl;
//	cout << "Remove head : " << list->removeHead() << endl;
	list->print();
	list->add(9);
	list->print();
	return 0;
}
