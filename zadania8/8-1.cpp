#include <iostream>
using namespace std;

bool czyParzysta(int liczba) {
    return liczba % 2 == 0;
}

int main() {
    int wartosc;
    cout << "Wprowadz liczbe calkowita: ";
    cin >> wartosc;

    bool wynik = czyParzysta(wartosc);
    
    cout << "Liczba " << wartosc << " jest ";
    cout << (wynik ? "parzysta" : "nieparzysta");

    return 0;
}
