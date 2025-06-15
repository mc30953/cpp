#include <iostream>
using namespace std;

int main() {
	char ciag[21];
	cout << "Podaj ciag znakow (max 20):";
	cin.getline(ciag, 21);
	cout << "Wprowadzony ciag znakow: " << ciag;
}
