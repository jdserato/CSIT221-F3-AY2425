#include <iostream>
#include "arraylist.h"
using namespace std;
int main() {
	List* list = new ArrayList();
	char op;
	int num;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				list->add(num);
				break;
			case 'p':
				list->print();
				break;
			case 'x':
				return 0;
		}
	}
	return 0;
}
