#include <iostream>
#include "stackarray.h"
using namespace std;
int main() {
	Stack* stack = new StackArray();
	char op;
	int num;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				stack->push(num);
				break;
			case 'r':
				cout << "Pop " << stack->pop() << endl;
				break;
			case 't':
				cout << "Top " << stack->top() << endl;
				break;
			case 's':
				cout << "Size: " << stack->size() << endl;
				break;
			case '?':
				cout << "Is Empty? " << stack->isEmpty() << endl;
				break;
			case 'x':
				return 0;
		}
	}
	return 0;
}
