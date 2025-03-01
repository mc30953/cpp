#include <iostream>
using namespace std;
int main(){
	float c;
    cout << "podaj temperature w stopniach celsjusza: ";
    cin >> c;
    char j;
    cout << "podaj jednostke docelowa(k - kelvin, f - fahrenheit): ";
    cin >> j;
	
	switch(j) {
	case 'k':
		cout << "Temperatura w stopniach Kelvina: " << c + 273.15;
		break;
	case 'f':
		cout << "Temperauta w stopniach Fahrenheita: " << (c * 9/5) + 32;
		break;
	default:
		cout << "Nieznana opcja!";
		break;
}
return 0;
}