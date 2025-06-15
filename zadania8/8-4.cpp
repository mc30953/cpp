#include <iostream>
#include <string>
using namespace std;

void wczytajLiczby(int tab[]) {
	for (int i = 0; i < 5; ++i) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tab[i];
	}
}

int znajdzMaksimum(int dane[]) {
	int najwyzsza = dane[0];
	for (int j = 1; j < 5; ++j) {
		if (dane[j] > najwyzsza) {
			najwyzsza = dane[j];
		}
	}
	return najwyzsza;
}

void pokazWynik(int liczba) {
	cout << "Najwieksza liczba to: " << liczba << endl;
}

int main() {
	int liczby[5];
	wczytajLiczby(liczby);
	int maksimum = znajdzMaksimum(liczby);
	pokazWynik(maksimum);
	return 0;
}
