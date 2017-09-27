//Question 5
/*An integer is said to be prime if it is divisible only by the two distinct
factors 1 and itself. Write a function that determines if a number is prime. Use this
function in a program that determines and prints all the prime numbers between 1 and 5000.*/

#include <iostream>
#include <math.h>

using namespace std;

int  main(){
	
	bool boo=true;
	cout << "1 is a prime number.\n";
	cout << "2 is a prime number.\n";
	for(int i=3; i<5000; i++){
		if(i%2!=0){
			boo=true;
			for(int j=3; j*j <=i; j++){
				if(i%j==0){
				boo = false;
				}
			}
			if(boo==true){
				cout << i << " is a prime number.\n";
			}
		}
	}	
}
