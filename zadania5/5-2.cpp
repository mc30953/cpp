#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout << "Podaj liczbe N:";
	cin >> n;
	cout << "Kwadraty liczb od 1 do " << n << ":" << endl;
	for(int i = 1; i <= n; i++){
		int s;
		s = pow(i, 2);
		cout << i << "^2 = " << s << endl;
	}
}