#include <iostream>
#include <vector>

template<typename T>
void vprint(std::vector<T> vector){
	for(typename std::vector<T>::const_iterator i=vector.begin(); i!=vector.end(); ++i){
		std::cout<<*i<<" ";
	}
	std::cout<<std::endl;
}

/*template<typename T>
void print(T const* array, int size){
	for(int i=0; i<size; i++){
		std::cout<<array[i]<<" ";
	}
	std::cout<<std::endl;
}*/

int main(){
	std::vector<int>numvector;
	std::vector<std::string>stringvector;

	std::cout << "Enter size of the array:"<<std::endl;
	int size;
	std::cin>>size;

	std::cout<<"Enter int values to put into the array:"<<std::endl;

	int Numarray[size]={0};
	int value;
	for(int i=0; i<size; i++){
		std::cin>>value;
		Numarray[i]=value;
		numvector.push_back(value);
	}

	std::cout<<"Enter string values to put into the array:"<<std::endl;

	std::string Stringarray[size];
	std::string word;
	for(int i=0; i<size; i++){
		std::cin>>word;
		Stringarray[i]=word;
		stringvector.push_back(word);
	}

	//print(Numarray,size);
	//print(Stringarray,size);

	vprint(numvector);
	vprint(stringvector);

	return 0;
}
