#include <iostream>
using namespace std;

int pobierzLiczbe() {
    int liczba;
    cout << "Wpisz liczbe do obliczenia silni: ";
    cin >> liczba;
    return liczba;
}

int obliczSilnie(int n) {
    int wynik = 1;
    for (int i = 2; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

void wyswietlWynik(int silnia) {
    cout << "Wynik silni: " << silnia << endl;
}

int main() {
    int wartosc = pobierzLiczbe();
    int silnia = obliczSilnie(wartosc);
    wyswietlWynik(silnia);
    return 0;
}
