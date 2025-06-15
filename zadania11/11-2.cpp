#include <iostream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osoby[3] = {
        {"jan", "kowalski", 45},
        {"marek", "nowak", 11},
        {"madzia", "ciejko", 20}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Imie: " << osoby[i].imie << "\n";
        cout << "Nazwisko: " << osoby[i].nazwisko << "\n";
        cout << "Wiek: " << osoby[i].wiek << "\n\n";
    }

    return 0;
}
