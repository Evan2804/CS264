#pragma once 

class MyComplex
{
protected:
	double a;
	double b;
public:
	MyComplex();
	double getReal();
	void setReal(double);
	double getImage();
	void setImage(double);
	MyComplex operator+(const MyComplex &z);
	MyComplex operator-(const MyComplex &z);
	MyComplex operator*(const MyComplex &z);
	void print();
};