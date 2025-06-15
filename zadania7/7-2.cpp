#include <iostream>
using namespace std;

int main() {
	char ciag[21];
	cout << "Podaj ciag znakow (max 20 znakow): ";
	cin.getline(ciag, 21);
	for(int i = 0; i < 21; i++){
		if(ciag[i] == 'a')
			ciag[i] = 'o';
	}
	cout << "Zmieniony ciag znakow: " << ciag;
}
