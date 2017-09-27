//Question
//Write a program that inputs a five-digit number, separates the number into its
//individual digits and prints the digits separated from one another by three spaces each.

#include <iostream>

using namespace std;

int main(){
	
	cout << "Input a five digit number below: \n";
	int x; cin >> x;
	if(x>99999){
		while(x>99999){
			cout <<"Please input a FIVE digit number below: \n";
			cin >> x;
			if(x<99999){
				break;
			}
		}
	}
	int num = 10000;
	for(int i=0; i<5; i++){
	cout << (x-(x%num))/num << "   ";
	x=x%num;
	num=num/10;
	}
	cout << "\n";
}
