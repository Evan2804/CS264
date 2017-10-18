//Evan Metcalfe
//15474498

#include <iostream>

using namespace std;

void print_string_ptr(char str[]){

	bool stop = false;
	int x=0;

	while(stop!=true){
		if(str[x]=='\0'){
			stop=true;
		}else{
			cout << *(str+(x)) <<endl;
			x++;
		}
	}
}

void print_string_array(char str[]){

	bool stop = false;
	int x=0;

	while(stop!=true){
		if(str[x]=='\0'){
			stop=true;
		}else{
			cout << str[x] <<endl;
			x++;
		}
	}
}


int main(){

	char s1[50];

	cout << "Please enter String below: " << endl;
	cin >> s1;

	print_string_array(s1);
	print_string_ptr(s1);


}
