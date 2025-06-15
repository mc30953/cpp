#include <iostream>
using namespace std;

int calcVolume(int a) {
    return a * a * a;
}

int calcVolume(int a, int b, int h) {
    return a * b * h;
}

float calcVolume(int r, int h) {
    return 3.1415f * r * r * h;
}

int main() {
    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1. Szescian (V = a^3)\n";
    cout << "2. Prostopadloscian (V = a*b*h)\n";
    cout << "3. Walec (V = pi * r^2 * h)\n";

    int wybor;
    cout << "Podaj numer bryly: ";
    cin >> wybor;

    switch (wybor) {
        case 1: {
            int bok;
            cout << "Podaj dlugosc boku a: ";
            cin >> bok;
            cout << "Objetosc wynosi: " << calcVolume(bok) << endl;
            break;
        }
        case 2: {
            int a, b, h;
            cout << "Podaj dlugosc a: ";
            cin >> a;
            cout << "Podaj szerokosc b: ";
            cin >> b;
            cout << "Podaj wysokosc h: ";
            cin >> h;
            cout << "Objetosc wynosi: " << calcVolume(a, b, h) << endl;
            break;
        }
        case 3: {
            int r, h;
            cout << "Podaj promien r: ";
            cin >> r;
            cout << "Podaj wysokosc h: ";
            cin >> h;
            cout << "Objetosc wynosi: " << calcVolume(r, h) << endl;
            break;
        }
        default:
            cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}

