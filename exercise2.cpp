//Question 2
//Write a program that reads in two integers and determines and prints
//if the first is a multiple of the second.

#include <iostream>

using namespace std;

int main(){

int num1; cin >> num1;
int num2; cin >> num2;

if(num2%num1==0){
	cout << num1 << " is a multiple of " << num2 <<"\n";
}
else{
	cout << num1 << " is not a multiple of "<< num2 <<"\n";
}
}
