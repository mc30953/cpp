#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string tekst, odwrocony;

    cout << "Podaj ciag znakow: ";
    cin >> tekst;

    int dlugosc = tekst.length();

    for (int i = 0; i < dlugosc; i++) {
        odwrocony += tekst[dlugosc - 1 - i];
    }

    cout << "Odwrocony ciag: " << odwrocony << endl;
}
