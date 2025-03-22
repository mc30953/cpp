#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Podaj liczbe N:";
	cin >> n;
	int s;
	for(int i = 1; i <= n; i++){
		s += i;
	}
	cout << "Suma liczb od 1 do " << n << " wynosi:" << s;
}