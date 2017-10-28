#include <iostream>

using namespace std;

struct person{
	char name[20];
	int age;
};

int main(){
	
	int amount;
	cout << "Please enter how many people there are:" << endl;
	cin >> amount;

	person listed[amount];

	for(int i=0; i<amount; i++){
		cout << "Please enter their name:" << endl;
		cin >> listed[i].name;
		cout << "Please enter their age:" << endl;
		cin >> listed[i].age;
	}
	
	cout << "====================" << endl;
	
	for(int i=amount-1; i>=0; i--){
		cout << "Name: " << listed[i].name << endl;
		cout << "Age: " << listed[i].age << endl;
		cout << "====================" << endl;
	}

}