#include <iostream>
#include <cstdlib>
#include "die.h"

using namespace std;

die::die(int number){

	if(number<4){
		sides=6;
	}else{
		sides=number;
	}
}

int die::roll(){
	dn=rand()%sides+1;
	return 0;
}
int die::getNumsides(){
	return sides;
}
int die::getValue(){
	return dn;
}