#include <iostream>
#include "die.h"

using namespace std;

int main(){

	int sides;
	int rolls;
	int value=0;

	cout << "How many rolls?" << endl;
	cin >> rolls;
	cout << "How many sides does the dice have?" << endl;
	cin >> sides;
	
	die dice(sides);

	sides=dice.getNumsides();
	int ar[sides] = {0};

	for(int i=0; i<=rolls; i++){
		dice.roll();
		value = dice.getValue();
		ar[value]++;
	}

	for(int i=0; i<sides; i++){
		cout << i+1 << " was rolled " << ar[i] << " times." << endl;
	}

	return 0;
}