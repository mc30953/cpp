#include <iostream>
#include <ctime>
using namespace std;

void porownaj(int podana, int cel) {
	if (podana > cel) {
		cout << "Za duza\n";
	} else {
		cout << "Za mala\n";
	}
}

bool sprawdzLiczbe(int podana, int cel) {
	if (podana == cel) {
		cout << "Brawo, trafiles!\n";
		return true;
	} else {
		porownaj(podana, cel);
		return false;
	}
}

int main() {
	srand(time(NULL));
	int sekret = rand() % 100 + 1;
	bool trafiono = false;

	while (!trafiono) {
		int proba;
		cout << "Zgadnij liczbe (1–100): ";
		cin >> proba;
		trafiono = sprawdzLiczbe(proba, sekret);
	}

	return 0;
}
