#include <iostream>

using namespace std;

class Container{
private:
	std::string datastruct_;
	double data;
public:
	virtual void store(double x)=0;
	virtual bool get(int index, double &data)=0;
	Container(std::string a){datastruct_=a;};
	//~Container();
};

class FixedArray : public Container{
private:
	double array[2]={5};
	//int *data_=array;
	int size_=2;
	int lenght_=0;
public:
	FixedArray(std::string a):Container(a){}
	void store(double x){
		array[0]=x;
		array[1]=x+1;
	}
	bool get(int index, double &data){
		if(index<size_){
			data=array[index];
			return true;
		}
		return false;
	}
};

int main(){
	FixedArray obj("Array");
	obj.store(9.5);
	double a;
	if(obj.get(0,a)){
		std::cout<<a<<" is contained in the array"<<std::endl;
	}else{
		std::cout<<"index is too large"<<std::endl;
	}
	return 0;
}