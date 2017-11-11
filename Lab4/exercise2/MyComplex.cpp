#include <iostream>
#include <cstdlib>
#include <cmath>
#include "MyComplex.h"
 
using namespace std;

MyComplex::MyComplex(){
	a=0;
	b=0;
}

double MyComplex::getReal(){
	return a;
}
double MyComplex::getImage(){
	return b;
}
void MyComplex::setReal(double value){
	a=value;
}
void MyComplex::setImage(double value){
	b=value;
}

MyComplex MyComplex::Add(const MyComplex &z){
	a+=z.a;
	b+=z.b;
}

MyComplex MyComplex::Subtract(const MyComplex &z){
	a-=z.a;
	b-=z.b;
}

MyComplex MyComplex::Multiply(const MyComplex &z){
	double tempa = a*z.a;
	double tempb = b*z.a;

	double tempab = a*z.b;
	double tempba = b*z.b;

	a=tempa-tempb;
	b=tempab+tempba;
}

void MyComplex::print(){
	cout << getReal() << "+" << getImage() << "i" <<endl;
}