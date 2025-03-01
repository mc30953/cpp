#include <iostream>
using namespace std;
int main(){
	int kg;
    cout << "podaj wage (w kilogramach): ";
    cin >> kg;
    float m;
    cout << "podaj wzrost (w metrach): ";
    cin >> m;
    float bmi;
    bmi = kg/(m*m);
	if(bmi < 18.5){
    	cout<<"Twoje BMI wynosi " << bmi << " - niedowaga";
	}else if(bmi < 25){
    	cout<<"Twoje BMI wynosi " << bmi << " - w normie";
	}else if(bmi < 30){
		cout<<"Twoje BMI wynosi " << bmi << " - nadwaga";
	}else{
		cout<<"Twoje BMI wynosi " << bmi << " - otylosc";
	}
return 0;
}