#include <iostream>
using namespace std;
int main(){
	int a;
    cout << "podaj wynik egzaminu(liczba punktow): ";
    cin >> a;
	if(a < 50){
    	cout<<"Ocena niedostateczna";
	}else if(a < 70){
    	cout<<"Ocena dostateczna";
	}else if(a < 85){
		cout<<"Ocena dobra";
	}else if(a < 100){
		cout<<"Ocena bardzo dobra";
	}else{
		cout<<"Ocena celujaca";
	}
return 0;
}