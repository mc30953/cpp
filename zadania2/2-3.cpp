#include <iostream>
using namespace std;
int main(){
	int a;
    cout << "podaj liczbe calkowita: ";
    cin >> a;
	if(a%2==0){
    	cout<<"Liczba " << a << " jest parzysta. \n";
	}
	else{
    	cout<<"Liczba " << a << " jest nieparzysta. \n";
	}
	if(a%3==0){
    	cout<<"Liczba " << a << " jest podzielna przez 3.";
	}
	else{
    	cout<<"Liczba " << a << " nie jest podzielna przez 3.";
	}
return 0;
}