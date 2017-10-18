//Evan Metcalfe
//15474498

#include <iostream>
#include <string.h>

using namespace std;

int my_string_len(char s[]){

	int i=0; 
	while(s[i]!='\0'){
		i++;
	}
	
	return i;
}

void my_string_cat(char s1[], char s2[], int totalsize){

	int s1length = my_string_len(s1);
	int s2length = my_string_len(s2);

	if(s1length+s2length>=totalsize){
		cout << "String s1 has a length of " << s1length << endl;
		cout << "String s2 has a length of " << s2length << endl;
		cout << "They have a combined lenght of " << totalsize << endl;
		
		for(int i=s1length; i<totalsize; i++){
			s1[i] = s2[i-s1length];
		}
		cout << "The s1 and s2 concatenate to be " << s1 << endl;
		
	}else{
		cout << "The total length of String s1 and String s2 is greater than the char array." << endl;	
	}


}



int main(){
	
	char s1[50] = "";
	char s2[50] = "";

	cout << "Please enter your first string:";
	cin >> s1;
	cout << "Please enter your second string:";
	cin >> s2;

	int totallength = my_string_len(s1)+my_string_len(s2);
	
	my_string_cat(s1,s2,totallength);

}
