//Question 4

/*Develop a C++ program that will determine if a department-store customer
has exceeded the credit limit on a charge account. For each customer, the following
information is available:

1. account number (an integer);
2. balance at the beginning of the month;
3. total of all items charged by the customer this month;
4. total of all credits applied to the customer’s account this month;
5. allowed credit limit

The program should input this information, calculate the new balance (= beginning
balance + charges - credits) and determine if the new balance exceeds the customer’s
credit limit. For those customers whose credit limit is exceeded, the program should
display the customer’s account number, credit limit, new balance and the message
“Credit limit exceeded.”

The program should permit multiple customer details to be inputted with the
above information being printed to the screen after each customer. The program should
terminate when an account number of -1 is inputted.*/

#include <iostream>

using namespace std;

int main(){
	
	while(true){
		cout << "\nAccount Number: ";
		int accountnum; cin >> accountnum;
		if(accountnum==-1){
			break;		
		}
		cout << "Balance: ";
		double balance; cin >> balance;
		cout << "Total items charged: ";
		double tcharged; cin >> tcharged;
		cout << "Total credit charged: ";
		double ccharged; cin >> ccharged;
		cout << "Credit limit: ";
		double limit; cin >> limit;

		double newb = balance+tcharged-ccharged;

		if(newb>limit){
			cout << "\nAccount Number: " << accountnum;
			cout << "\nCredit limit: " << limit;
			cout << "\nCurrent balance: " << newb;
			cout << "\nCredit limit exceeded\n";
		}
	}
	cout << "Program terminated \n";
}	
