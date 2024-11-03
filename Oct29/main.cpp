#include <iostream>
#include "bintree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree* tree = new BinaryTree();
	node* thirteen = tree->addRoot(13);
	try {
		tree->addRoot(7);
	} catch (exception& e) {
		cout << e.what() << endl;
	}
	tree->addLeft(thirteen, 4);
	try {
		tree->addLeft(thirteen, 8);
	} catch (exception& e) {
		cout << e.what() << endl;
	}
	tree->print();
	return 0;
}
