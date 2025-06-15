#include <iostream>
using namespace std;

void dodaj(int x, int y) {
    cout << x << " + " << y << " = " << (x + y) << endl;
}

void odejmij(int x, int y) {
    cout << x << " - " << y << " = " << (x - y) << endl;
}

void mnoz(int x, int y) {
    cout << x << " * " << y << " = " << (x * y) << endl;
}

void dziel(int x, int y) {
    if (y != 0)
        cout << x << " / " << y << " = " << (x / y) << endl;
    else
        cout << "Blad: nie mozna dzielic przez zero!" << endl;
}

int main() {
    int wybor, liczba1, liczba2;

    while (true) {
        cout << "1. Dodaj\n"
             << "2. Odejmij\n"
             << "3. Mnoz\n"
             << "4. Dziel\n"
             << "0. Zakoncz\n";
        cin >> wybor;

        if (wybor == 0)
            break;
            
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba2;

        switch (wybor) {
            case 1:
                dodaj(liczba1, liczba2);
                break;
            case 2:
                odejmij(liczba1, liczba2);
                break;
            case 3:
                mnoz(liczba1, liczba2);
                break;
            case 4:
                dziel(liczba1, liczba2);
                break;
        }
    }

    return 0;
}
