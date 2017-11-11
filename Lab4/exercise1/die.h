#pragma once

using namespace std;

class die
{
	int sides;
	int dn;
public:
	die(int);
	int roll();
	int getNumsides();
	int getValue();
};