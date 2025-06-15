#include <iostream>
#include <string>
using namespace std;

int main() {
	string ciag;
	char znak;
	cout << "Podaj ciag znakow:";
	cin >> ciag;
	cout << "Podaj znak do zliczenia:";
	cin >> znak;
	int suma;
	string poz;
	for(int i=0;i<ciag.length();i++){
		if(ciag[i] == znak){
			suma += 1;
			poz.append(to_string(i) + ", ");
		}
	}
	cout << "Liczba powtorzen: " << suma << endl;
	cout << "Miejsca wystapien: " << poz;
}
