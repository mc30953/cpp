#include <iostream>
using namespace std;
int main(){
	int a,b;
    cout << "podaj pierwsza liczbe: ";
    cin >> a;
    cout << "podaj druga liczbe: ";
    cin >> b;
    cout << "suma: " << a + b << endl;
	if((a+b)%2==0){
    	cout<<"Suma jest liczba parzysta.";
	}
	else{
    	cout<<"Suma jest liczba nieparzysta.";
	}
return 0;
}