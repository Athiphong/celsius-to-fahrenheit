#include <iostream>
using namespace std;
void main(){
	float C , F ;
	cout << "Enter Celsius temperature: " ;
	cin >> C;
	F = 9 / 5 * C + 32;
	cout << "Fahrenheit = " << F <<endl;
	cout << "Now weather in Thailand is " << ((F > 70) ? "HOT" : "COOL" ) <<endl;

}