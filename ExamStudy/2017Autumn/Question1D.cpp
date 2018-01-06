#include <iostream>
struct stock_node{
    std::string name;
    double price;
    stock_node *right;
    stock_node *left;
};

void stock_range(const stock_node& root){
    stock_node rightside = root;
    stock_node leftside = root;
    
    int smallest = root.price;
    int biggest = root.price;
    
    while(leftside.left){
        if(leftside.price<smallest){
            smallest=leftside.price;
        }
        leftside=*leftside.left;
    }
    
    while(rightside.right){
        if(rightside.price>biggest){
            biggest=rightside.price;
        }
        rightside=*rightside.right;
    }
    
    std::cout<<"Lowest stock price is "<<smallest<<std::endl;
    std::cout<<"Highest stock price is "<<biggest<<std::endl;
}


int main(){
    
    //example stocks
    stock_node euro, pound, dollar, yen, bitcoin, litecoin;
	euro.name="euro";
	euro.price=205.5;
	euro.left=&pound;
	euro.right=&litecoin;

	pound.name="pound";
	pound.price=181.3;
	pound.left=&dollar;
	pound.right=&yen;

	dollar.name="dollar";
	dollar.price=114.8;
	dollar.left=NULL;
	dollar.right=&bitcoin;

	yen.name="yen";
	yen.price=189.9;
	yen.left=NULL;
	yen.right=NULL;

	bitcoin.name="bitcoin";
	bitcoin.price=140.0;
	bitcoin.left=NULL;
	bitcoin.right=NULL;

	litecoin.name="litecoin";
	litecoin.price=380.6;
	litecoin.left=NULL;
	litecoin.right=NULL;
	
	stock_range(euro);
	
    return 0;
}