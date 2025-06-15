#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    ifstream plik("dane.txt");
    if (!plik) {
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku z przykladowymi danymi...." << endl;
        ofstream plik("dane.txt");
        plik << "Jan Kowalski 25\nAnna Nowak 32\n";
        plik.close();
    } else {
        cout << "Czy chcesz dopisac kolejna osobe (t/n)? ";
        string odp;
        cin >> odp;
        if (odp == "t" || odp == "T") {
            string imie, nazwisko;
            int wiek;
            cout << "Podaj imie: ";
            cin >> imie;
            cout << "Podaj nazwisko: ";
            cin >> nazwisko;
            cout << "Podaj wiek: ";
            cin >> wiek;

            ofstream plik("dane.txt", ios::app);
            plik << imie << " " << nazwisko << " " << wiek << "\n";
            plik.close();
        }
        plik.close();
    }

    cout << "Dane w pliku:\n";
    ifstream plik2("dane.txt");

    string imie, nazwisko;
    int wiek;
    while (plik2 >> imie >> nazwisko >> wiek) {
        cout << "imie: " << imie << " nazwisko: " << nazwisko << " wiek: " << wiek << endl;
    }

    plik2.close();

    return 0;
}

