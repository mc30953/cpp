#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Podaj liczbe n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
    	int s;
    	s = i * j;
        cout << i << " * " << j << " = " << s << endl;
    }
}
}
