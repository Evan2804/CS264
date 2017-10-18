//Evan Metcalfe
//15474498

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int a[11];
int num,dice1,dice2,roll;
cout << "Enter number of simulations needed:";
cin >> num;
	
	for(int i=0; i<11; i++){
		a[i]=0;
	}
		

	for(int i=0; i<num; i++){
		dice1 = rand()%6+1;
		dice2 = rand()%6+1;
		roll=dice1+dice2;
	
		a[roll-2]++;
	}
	cout << "\n";
	for(int i=0; i<11; i++){
		int value = a[i];
		cout << i <<" was rolled " << value << " times.\n";
	}
}

