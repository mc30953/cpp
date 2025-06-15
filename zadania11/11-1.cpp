#include <iostream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osoba = {"jan", "kowalski", 20};

    cout << "Dane przed zmiana:\n";
    cout << "Imie: " << osoba.imie << "\n";
    cout << "Nazwisko: " << osoba.nazwisko << "\n";
    cout << "Wiek: " << osoba.wiek << "\n";

    osoba.wiek += 12;

    cout << "\nDane po zmianie:\n";
    cout << "Imie: " << osoba.imie << "\n";
    cout << "Nazwisko: " << osoba.nazwisko << "\n";
    cout << "Wiek: " << osoba.wiek << "\n";

    return 0;
}
