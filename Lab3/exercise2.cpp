//Evan Metcalfe
//15474498
#include <iostream>

using namespace std;

void copy1(double *a, double *b, int size){
	for(int i=0; i<size; i++){
		b[i]=a[i];
	}
}

int main(){

cout << "Fill the double array below or enter -1 to end:" << endl;

double *a = new double[1];
int i=0;
bool stop=false;
while(stop!=true){
	cin >> a[i];
	if(a[i]==-1){
		stop=true;
	}else{
		double *b = new double[i+2];
		copy1(a,b,i+1);
		delete []a;
		a=b;
		i++;
	}
}
	i--;

	while(i>=0){
		cout << a[i] << endl;
		i--;
	}
}

