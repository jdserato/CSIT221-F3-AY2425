#include "list.h"
#include <iostream>
using namespace std;
// ArrayList is a subclass of List
class ArrayList : public List {
	int array[5];
	int size = 0;
	
	public:
	void add(int num) {
		cout << "Add " << num << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	int remove(int num) {
		// Step 1: find the num
		for (int i = 0; i < size; i++) {
			if (array[i] == num) {
				for (int j = i; j < size-1; j++){
					array[j] = array[j+1];
				}
				size--;
				return i+1;
			} 
		}
		return -1;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
