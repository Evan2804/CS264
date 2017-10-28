//Evan Metcalfe
//15474498

#include <iostream>
#include <string>

using namespace std;

struct customer{
	string name;
	customer *next;
};
void print_customers(customer &head);