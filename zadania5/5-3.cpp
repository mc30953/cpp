#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout << "Podaj liczbe N: ";
	cin >> n;
	cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
	for(int i = 1; i <= n; i++){
		if(i%2!=0){
		cout << i << endl;
		}
	}
}