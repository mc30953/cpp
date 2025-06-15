#include <iostream>
#include <string>

using namespace std;

string pobierzTekst() {
    string wejscie;
    cout << "Podaj ciag znakow: ";
    getline(cin, wejscie);
    return wejscie;
}

string odwrocTekst(const string& oryginal) {
    string odwrocony = "";
    for (int i = oryginal.size() - 1; i >= 0; --i) {
        odwrocony += oryginal[i];
    }
    return odwrocony;
}

void pokazTekst(const string& wynik) {
    cout << "Odwrocony: " << wynik << endl;
}

int main() {
    string dane = pobierzTekst();
    string przetworzone = odwrocTekst(dane);
    pokazTekst(przetworzone);
    return 0;
}
