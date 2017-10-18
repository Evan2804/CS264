//Evan Metcalfe
//15474498

#include <iostream>

using namespace std;

int gcd(int num1, int num2){

	int biggest = 0;
	for(int i=1; i<=num1&&i<=num2; i++){
		if((num1%i==0)&&(num2%i==0)){
			if(i>biggest){
				biggest=i;
			}
		}
	}
	return biggest;
}

int main(){
	
int num1,num2;
cout << "Enter first value:";
cin >> num1;
cout << "Enter second value:";
cin >> num2;

int biggest = gcd(num1,num2);
cout << "The greatest common divisor of " << num1 << " and " << num2 << " = " <<biggest << "\n";
}
