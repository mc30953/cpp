#include <iostream>
using namespace std;
int main(){
	int h;
    cout << "podaj liczbe godzin parkowania: ";
    cin >> h;
    char t;
    cout << "podaj rodzaj pojazdu(s - samochod, m - motocykl, a - autobus): ";
    cin >> t;
	
	switch(t) {
	case 's':
		cout << "Oplata za parkowanie: " << h * 5 << "zl";
		break;
	case 'm':
		cout << "Oplata za parkowanie: " << h * 3 << "zl";
		break;
	case 'a':
		cout << "Oplata za parkowanie: " << h * 10 << "zl";
		break;
	default:
		cout << "Nieznana opcja!";
		break;
}
return 0;
}