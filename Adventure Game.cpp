#include <iostream>
using namespace std;

int main() {
	int Sub;
	cout << "You are stranded on a desert island what will you do?" << endl;
	cout << "1: Look for sticks, 2: Eat some random ahh berries" << endl;
	cin >> Sub;
	if (Sub == 1) {
		cout << "You found sticks :o" << endl;
	}
	else if (Sub == 2) {
		cout << "Erm dont you know not to eat random ahh berries ToT" << endl;
	}
	else {
		cout << "Invalid option!" << endl;
	}
	return 0;
}
