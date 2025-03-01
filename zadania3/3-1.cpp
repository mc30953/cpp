#include <iostream>
using namespace std;
int main(){
	int a,b;
    cout << "podaj pierwsza liczbe: ";
    cin >> a;
    cout << "podaj druga liczbe: ";
    cin >> b;
	char c;
    cout << "podaj znak dzialania (+, -, *, /): ";
    cin >> c;
	switch(c) {
	case '+':
		cout << "Wynik: " << a + b;
		break;
	case '-':
		cout << "Wynik: " << a - b;
		break;
	case '*':
		cout << "Wynik: " << a * b;
		break;
	case '/':
		cout << "Wynik: " << a / b;
		break;
	default:
		cout << "Nieznana opcja!";
		break;
}
return 0;
}