//Evan Metcalfe
//15474498
#include <iostream>

using namespace std;

int main(){

int size;

cout << "Enter the size of the sequence below:" << endl;
cin >> size;

double a[size]={0};

cout << "Fill the double array below: " <<endl;
for(int i=0; i<size; i++){
	cin >> a[i];
}

cout << "Below the double array is reversed:" << endl;
for(int i=size-1; i>=0; i--){
	cout << a[i] <<endl;
}
}
