#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("dane.txt");
    if (!plik) {
        cerr << "Nie mozna otworzyc pliku." << endl;
        return 1;
    }

    string imiona[3];
    string nazwiska[3];
    string wieki[3];

    int count = 0;
    while (count < 3 && plik >> imiona[count] >> nazwiska[count] >> wieki[count]) {
        count++;
    }

    for (int i = 0; i < count; ++i) {
        cout << "imie: " << imiona[i]
             << " nazwisko: " << nazwiska[i]
             << " wiek: " << wieki[i] << endl;
    }

    return 0;
}

