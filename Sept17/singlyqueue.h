#include "queue.h"
#include "linkedlist.h"
class SinglyQueue : public Queue {
	LinkedList* list;
	public:
	SinglyQueue() {
		list = new LinkedList();
	}
	void enqueue(int num) {
		list->add(num);
	}
	int dequeue() {
		return list->removeHead();
	}
	int first() {
		return list->get(1);
	}
	int size() {
		return list->getSize();
	}
	bool isEmpty(){
		return size() == 0;
	}
};
