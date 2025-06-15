#include <iostream>
using namespace std;

int pobierzLiczbe() {
    int liczba;
    cout << "Wprowadz liczbe, ile wyrazow ciagu Fibonacciego wyswietlic: ";
    cin >> liczba;
    return liczba;
}

int fibonacci(int n) {
    if (n <= 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void wyswietlCiag(int ile) {
    for (int i = 1; i <= ile; ++i) {
        cout << fibonacci(i);
        if (i < ile) cout << ", ";
    }
    cout << endl;
}

int main() {
    int wyrazy = pobierzLiczbe();
    wyswietlCiag(wyrazy);
    return 0;
}
