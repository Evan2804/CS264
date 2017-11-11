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
	MyComplex Add(const MyComplex &z);
	MyComplex Subtract(const MyComplex &z);
	MyComplex Multiply(const MyComplex &z);
	void print();
};