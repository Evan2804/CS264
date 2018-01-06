#include <iostream>
#include <cstring>

using namespace std;

char *reverse(const char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	int size=i;
	char *myname=new char[i];
	for(int j=0; j<size; j++){
		myname[i-1]=str[j];
		i--;
	}
	return myname;
}

int main(){

	char name[] = "Evan Metcalfe";
	char *a = reverse(name);
	cout<<a;

	return 0;
}