#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "podaj liczbe n: ";
	cin >> n;
int a = 0;
int i = 0;
while(i <= n){
	a += i;
	i++;
}
cout << "suma liczb naturalnych do " << n << ": " << a;
return 0;
}