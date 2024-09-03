#include <iostream>
#include "board.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << sizeof(entry);
	Scoreboard* board = new Scoreboard();
	entry player;
	char op;
	while (true) {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cout << "Enter name: ";
				cin >> player.name;
				cout << "Enter college: ";
				cin >> player.college;
				cout << "Enter score: ";
				cin >> player.score;
				board->add(player);
				break;
			case 'p':
				board->print(1);
				break;
			case 'x':
				cout << "Exiting...";
				return 0;
		}
	}
	return 0;
}
