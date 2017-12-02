#include <iostream>

template<typename T>
void print(T const* array, int size){
	for(int i=0; i<size; i++){
		std::cout<<array[i]<<" ";
	}
	std::cout<<std::endl;
}

int main(){
	std::cout << "Enter size of the array:"<<std::endl;
	int size;
	std::cin>>size;

	std::cout<<"Enter int values to put into the array:"<<std::endl;

	int Numarray[size]={0};

	for(int i=0; i<size; i++){
		std::cin>>Numarray[i];
	}

	std::cout<<"Enter string values to put into the array:"<<std::endl;
	std::string word;

	std::string Stringarray[size];

	for(int i=0; i<size; i++){
		std::cin>>Stringarray[i];
	}

	print(Numarray,size);
	print(Stringarray,size);

	return 0;
}
