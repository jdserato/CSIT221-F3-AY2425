#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	node* add_between(int num, node* pred, node* succ) {
		node* n = new node;
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		
		pred->next = n;
		succ->prev = n;
		
		size++;
	}
	
	int remove_node(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		pred->next = succ;
		succ->prev = pred;
		int tmp = n->elem;
		free(n);
		size--;
		return tmp;
	}
	
	public:
	LinkedList() {
		head = new node; // header
		tail = new node; // trailer
		size = 0;
		head->next = tail;
		tail->prev = head;
	}
	
	void add(int num) { // addtail
		add_between(num, tail->prev, tail);
	}
	
	void addHead(int num) { // addhead
		add_between(num, head, head->next);
	}
	
	int removeHead() {
		return remove_node(head->next);
	}
	
	void print() {
		node* curr = head->next;
		if (size == 0) {
			cout << "mt";
			return;
		}
		cout << "From HEAD: ";
		while (curr != tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "From TAIL: ";
		curr = tail->prev;
		while (curr != head) {
			cout << curr->elem << " <- ";
			curr = curr->prev;
		}
		cout << endl;
	}
	int get(int pos) {
		node* curr = head;
		int ctr = 1;
		while (ctr < pos) {
			curr = curr->next;
			ctr++;
		}
		return curr->elem;
	}
	
	int remove(int num) { // returns the position
		node* curr = head->next;
		int pos = 1;
		while (curr->elem != num && curr != tail) {
			curr = curr->next;
			pos++;
		}
		if (curr == tail) {
			return -1;
		}
		remove_node(curr);
		return pos;
	}
};
