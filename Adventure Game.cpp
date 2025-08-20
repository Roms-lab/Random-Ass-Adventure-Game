#include <iostream>
using namespace std;

int main() {
	int Sub;
	cout << "You are stranded on a desert island what will you do?" << endl;
	cout << "1: Look for sticks, 2: Eat some random ahh berries" << endl;
	cin >> Sub;
	if (Sub == 1) {
		cout << "You found sticks :o" << endl;
		int Sub2;
		cout << "1: Sharpen sticks, 2: Look for food" << endl;
		cin >> Sub2;
		if (Sub2 == 1) {
			cout << "You sharpened stick :o" << endl;
			int Sub3;
			cout << "1: Find food, 2: Drown :>" << endl;
			cin >> Sub3;
			if (Sub3 == 1) {
				cout << "You kill baby deer :D" << endl;
			}
			else if (Sub3 == 2) {
				cout << "You died..." << endl;
			}
			else {
				cout << "Invalid option!" << endl;
			}
		}
		else if (Sub2 == 2) {
			cout << "You get mauled to death by a bear" << endl;
		}
		else {
			cout << "Invalid option!" << endl;
		}
	}
	else if (Sub == 2) {
		cout << "Erm dont you know not to eat random ahh berries ToT" << endl;
	}
	else {
		cout << "Invalid option!" << endl;
	}
	return 0;
}
