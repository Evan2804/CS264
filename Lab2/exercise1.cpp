//Evan Metcalfe
//15474498

#include <iostream>

using namespace std;

void my_swap(int &num1, int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}
int main(){
int num1,num2;
cout << "Enter first value:";
cin >> num1;
cout << "Enter second value:";
cin >> num2;

cout <<"num1 = " << num1 << "\n";
cout <<"num2 = " << num2 << "\n";

my_swap(num1,num2);

cout <<"num1 = " << num1 << "\n";
cout <<"num2 = " << num2 << "\n";
}
