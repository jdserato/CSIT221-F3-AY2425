#include "stack.h"
#include "arraylist.h"
class StackArray : public Stack {
	ArrayList* list;
	public:
	StackArray() {
		list = new ArrayList();
	}
	
	void push(int num) {
		// one line of code
		list->add(num);
	}
	int pop() {
		// consider if way sulod, return -1
		if (isEmpty()) {
			return -1;
		}
		return list->removeLast();
	}
	int top() {
		// consider if way sulod, return -1
		if (isEmpty()) {
			return -1;
		}
		return list->get(size());
	}
	int size() {
		return list->getSize();
	}
	bool isEmpty() {
		return size() == 0;
	}
};
