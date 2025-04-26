#include <iostream>
using namespace std;
int main(){
	int tablica[3][3];
	int i, j, suma;
	cout << "podaj 9 liczb calkowitych:\n";
	for (i=0; i<3; i++) {
    	for (j=0; j<3; j++) {
        	cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
        	cin >> tablica[i][j];
    	}
	}
	for (i=0; i<3; i++) {
    	for (j=0; j<3; j++) {
        	suma += tablica[i][j];
    	}
	}
	cout << "\nSuma podanych liczb wynosi: " << suma << endl;
}