#include <iostream>
using namespace std;

int pobierzLiczbe() {
    int liczba;
    cout << "Wprowadz liczbe, dla ktorej obliczyc sume od 1 do niej: ";
    cin >> liczba;
    return liczba;
}

int sumaRekurencyjnie(int n) {
    if (n <= 1)
        return n;
    return n + sumaRekurencyjnie(n - 1);
}

void pokazWynik(int suma) {
    cout << "Wynik sumowania to: " << suma << endl;
}

int main() {
    int wartosc = pobierzLiczbe();
    int wynik = sumaRekurencyjnie(wartosc);
    pokazWynik(wynik);
    return 0;
}
