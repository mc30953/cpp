#include <iostream>
using namespace std;
int main(){
	int wiersze, kolumny;
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersze;
	cout << "Podaj liczbe kolumn: ";
	cin >> kolumny;
	int a = 1;
	for (int i = 1; i <= wiersze; i++) {
	    for (int j = 1; j <= kolumny; j++) {
	        cout << a << "	";
			a += 2;
			}
	    cout << endl;
	}
}
