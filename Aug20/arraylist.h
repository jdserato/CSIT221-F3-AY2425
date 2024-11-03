#include "list.h"
#include <iostream>
#include <cstdlib>
using namespace std;
// ArrayList is a subclass of List
class ArrayList : public List {
	int capacity;
	int* array;
	int size;
	
	public:
	ArrayList() {
		capacity= 5;
		array = (int*) malloc( 5 * sizeof(int) );
		size = 0;
	}
	
	int removeLast() {
		return array[--size];
	}
	
	void add(int num) {
		if (size == capacity) {
			cout << "Reallocating..." << endl;
			capacity = capacity * 1.5;
			cout << "ADDRESS before: " << array << endl;
			array = (int*)realloc(array, capacity * sizeof(int) );
			cout << "ADDRESS after : " << array << endl;
		}
		cout << "Add " << num << endl;
		array[size++] = num;
	}
	
	int getSize() {
		return size;
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
		cout << "Size: " << size << "/" << capacity << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
