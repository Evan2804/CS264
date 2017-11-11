#include <iostream>
#include "MyComplex.h"

using namespace std;

int main(){
	int operation;
	cout << "Add=1, Subtract=2, Multiply=3" << endl;
	cin >> operation;

	double real,image;
	cout << "Please enter the first real number:" << endl;
	cin >> real;
	cout << "Please enter the first imaginary number" << endl;
	cin >> image;

	MyComplex obj1;
	obj1.setReal(real);
	obj1.setImage(image);
	obj1.print();

	cout << "Please enter the second real number:" << endl;
	cin >> real;
	cout << "Please enter the second imaginary number" << endl;
	cin >> image;

	MyComplex obj2;
	obj2.setReal(real);
	obj2.setImage(image);

	switch(operation){
		case 1:
			obj1.Add(obj2);
			break;
		case 2:
			obj1.Subtract(obj2);
			break;
		case 3:
			obj1.Multiply(obj2);
			break;
	}
	obj1.print();

	return 0;
}