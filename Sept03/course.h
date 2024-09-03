#include "student.h"
class Course {
	Student** students;
	int size;
	int capacity;
	
	public:
	Course() {
		size = 0;
		capacity = 10;
		cout << "Allocating " << capacity * sizeof(Student) << " bytes" << endl;
		students = (Student**) malloc(capacity * sizeof(Student*));
	}
	
	void addStudent(Student* s) {
		if (size == capacity) {
			capacity = capacity * 1.5;
			students = (Student**) realloc(students, capacity * sizeof(Student*));
		}
		cout << "ADDING " << s->name << endl;
		students[size] = s;
		size++;
		cout << "MANA" << endl;
	}
	
	void print() {
		cout << "Student Size: " << size << endl;
		for (int i = 0; i<size; i++) {
			cout << i+1 << ". " << students[i]->name << endl;
		}
	}
};
