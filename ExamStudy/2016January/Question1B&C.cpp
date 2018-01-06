#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class MyComplex{
private:
	double real,img;
public:
	MyComplex(double a, double b);
	MyComplex(double a);
	MyComplex(const MyComplex &a);
	MyComplex operator+(const MyComplex &a);
	friend const MyComplex operator+(const MyComplex &a, double b);
	friend const MyComplex operator+(double a, const MyComplex &b);
	void print();

};

MyComplex::MyComplex(double a, double b):real(a),img(b){}

MyComplex::MyComplex(double a):real(a),img(0){}

MyComplex::MyComplex(const MyComplex &a):real(a.real),img(a.img){}

MyComplex MyComplex::operator+(const MyComplex &a){
	real+=a.real;
	img+=a.img;
	return *this;
}

const MyComplex operator+(const MyComplex &a, double b){
	MyComplex result(a);
	result.real+=b;
	return result;
}


const MyComplex operator+(double a, const MyComplex &b){
	return b+a;
}

void MyComplex::print(){
	cout<<real<<endl;
	cout<<img<<endl;
	cout<<endl;

}

int main(){

	MyComplex C1(5.0,4.5);
	//MyComplex C2(8.0);
	//MyComplex C0(C1);
	//MyComplex C3 = C1+C2;
	//MyComplex C4 = C1+4;
	MyComplex C5 = 5+C1;
	C5.print();
	return 0;
}