//Question 1:
//Write a program that inputs three integers from the keyboard, and prints 
//the sum, average, product, smallest and largest of these numbers.


#include <iostream>

using namespace std;

int main(){
int x;
int sum=0, product=1, smallest=999, biggest=0;
  for(int i=0; i<3; i++){
	cin >> x;
	sum +=x;
	product = product*x;
	if(smallest>x){
		smallest=x;
	}
	if(biggest<x){
		biggest=x;
	}
  }
cout << "Sum: " << sum << "\n";
cout << "Average: " << sum/3 << "\n";
cout << "Product: " << product << "\n";
cout << "Smallest: " << smallest << "\n";
cout << "Largest: " << biggest << "\n";
}
