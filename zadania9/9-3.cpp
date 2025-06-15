#include <iostream>
using namespace std;

int poteguj(int podstawa, int wykladnik) {
    if (wykladnik <= 1)
        return podstawa;
    return podstawa * poteguj(podstawa, wykladnik - 1);
}

void pokazWynik(int wynik, int podstawa, int wykladnik) {
    cout << podstawa << " ^ " << wykladnik << " = " << wynik << endl;
}

int main() {
    int x, y;
    cout << "Wprowadz podstawe: ";
    cin >> x;
    cout << "Wprowadz wykladnik: ";
    cin >> y;

    int wynik = poteguj(x, y);
    pokazWynik(wynik, x, y);

    return 0;
}
