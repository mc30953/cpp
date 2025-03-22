#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Podaj liczbe calkowita dodatnia N:";
	cin >> n;
	int p = 0;
	int i = 1;
do{
	if(i%2==0){
		p += 1;
	}
	i += 1;
}while(i <= n);
cout << "Liczba liczb parzystych od 1 do 10 wynosi:" << p ;
}