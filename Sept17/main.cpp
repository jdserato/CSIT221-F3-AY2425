#include <iostream>
#include "singlyqueue.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	cout << sizeof(node);
	Queue* queue = new SinglyQueue();
	queue->enqueue(2);
	queue->enqueue(4);
	queue->enqueue(6);
	queue->enqueue(8);
	queue->enqueue(10);
	cout << "Size: " << queue->size() << endl; // 5
	cout << "IsEmpty: " << queue->isEmpty() << endl; // 0
	
	cout << "Dequeue: " << queue->dequeue() << endl; // 2
	cout << "Dequeue: " << queue->dequeue() << endl; // 4
	cout << "First: " << queue->first() << endl; // 6
	queue->enqueue(12);
	queue->enqueue(14);
	cout << "Dequeue: " << queue->dequeue() << endl; // 6
	cout << "Dequeue: " << queue->dequeue() << endl; // 8
	cout << "Dequeue: " << queue->dequeue() << endl; // 10
	cout << "Dequeue: " << queue->dequeue() << endl; // 12
	cout << "First: " << queue->first() << endl; // 14
	cout << "Size: " << queue->size() << endl; // 1
	cout << "IsEmpty: " << queue->isEmpty() << endl; // 0
	return 0;
}
