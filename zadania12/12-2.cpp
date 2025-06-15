#include <iostream>
#include <fstream>
using namespace std;

void fcreate() {
    cout << "Podaj nazwe nowego pliku: ";
    string filename;
    cin >> filename;
    ofstream plik(filename.c_str());
    if (plik) {
        cout << "Plik " << filename << " zostal utworzony." << endl;
    } else {
        cout << "Nie mozna utworzyc pliku " << filename << "." << endl;
    }
}

void fdelete() {
    cout << "Podaj nazwe pliku do usuniecia: ";
    string filename;
    cin >> filename;
    if (remove(filename.c_str()) == 0) {
        cout << "Plik " << filename << " zostal usuniety." << endl;
    } else {
        cout << "Nie mozna usunac pliku " << filename << "." << endl;
    }
}

void frename() {
    cout << "Podaj nazwe pliku do zmiany: ";
    string oldName;
    cin >> oldName;
    cout << "Podaj nowa nazwe pliku: ";
    string newName;
    cin >> newName;
    if (rename(oldName.c_str(), newName.c_str()) == 0) {
        cout << "Zmieniono nazwe pliku." << endl;
    } else {
        cout << "Nie mozna zmienic nazwy pliku." << endl;
    }
}

int main() {
    cout << "Wybierz operacje:\n1 - Utworz pusty plik\n2 - Usun plik\n3 - Zmien nazwe pliku\n";
    int wybor;
    cin >> wybor;

    switch (wybor) {
        case 1: fcreate(); break;
        case 2: fdelete(); break;
        case 3: frename(); break;
        default: cout << "Nieprawidlowy wybor." << endl; break;
    }
}
