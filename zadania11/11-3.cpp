#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void wyswietlDane(const Samochod& samochod) {
    cout << "Marka: " << samochod.marka << "\n";
    cout << "Model: " << samochod.model << "\n";
    cout << "Rok produkcji: " << samochod.rok_produkcji << "\n";
}

int main() {
    Samochod strzala = {"Audi", "A3", 2002};

    wyswietlDane(strzala);

    return 0;
}
