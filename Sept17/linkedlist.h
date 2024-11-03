#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	public:
	int getSize() {
		return size;
	}
		
	void add(int num) { //add Tail
		if (!head) {
			cout << "Adding head" << endl;
			head = new node;
			head->elem = num;
			head->next = NULL;
			cout << "Done adding head" << endl;
			tail = head;
			size++;
		} else {
			node* n = (node*) calloc(1, sizeof(node));
			n->elem = num;
			tail->next = n;
			tail = n;
			size++;
		}
	}
	
	int removeHead() {
		int ret = head->elem;
		node* tmp = head;
		head = head->next;
		free(tmp);
		size--;
		return ret;
	}
	
	void print() {
		node* curr = head;
		if (size == 0) {
			cout << "mt";
			return;
		}
		cout << "First Elem: " << head->elem << endl;
		cout << "Last Elem:  " << tail->elem << endl;
		while (curr != NULL) {
			cout << curr->elem << " -> ";
			curr = curr->next;
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
	
	int remove(int num) {
		if (num == head->elem) {
			removeHead();
			return 1;
		}
		node* curr = head;
		node* prev;
		int pos = 1;
		while (curr->elem != num) {
			prev = curr;
			curr = curr->next;
			pos++;
		}
		prev->next = curr->next;
		size--;
		if (curr == tail) {
			tail = prev;
		}
		free (curr);
		return pos;
	}
};
