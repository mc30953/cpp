#include <iostream>
using namespace std;
int main(){
	char odp;
do{
	int n;
	cout << "podaj liczbe: ";
	cin >> n;
	cout << "Wprowadziles liczbe:" << n << endl;
	cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n):";
	cin >> odp;
}while(odp == 't');
}