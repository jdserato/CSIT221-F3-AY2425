#include "node.h"
#include <stdexcept>
using namespace std;

class BinaryTree {
	node* root;
	int size;
	
	public:
	BinaryTree() {
		root = NULL;
		size = 0;
	}
	
	node* addRoot(int num) {
		if (root) {
			throw logic_error("Already has root");
		}
		root = new node();
		root->elem = num;
		size++;
		return root;
	}
	
	node* addLeft(node* p, int num) {
		if (p->left) {
			throw logic_error(to_string(p->elem) + " already has left child");
		}
		p->left = new node();
		p->left->elem = num;
		p->left->parent = p;
		size++;
		return p->left;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		cout << root->elem << endl;
		cout << root->left->elem << endl;
	}
};
