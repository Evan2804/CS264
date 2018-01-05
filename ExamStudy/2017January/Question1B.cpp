#include <iostream>

//Definition of a struct for customer_node
struct customer_nodes{
    std::string name;
    customer_nodes *next;
};

//find customer function takes in pointer and string to search
bool find_customer(customer_nodes *head, std::string name){
    
    //while there is a customer run the while loop
    while(head!=NULL){
        
        //if the customer name matches the name being searched return true
        if(head->name==name){
            return true;
        }
        
        //change pointer to point at next customer
        head=head->next;
    }
    
    return false; 
}

int main(){
    
    //creation of customers
    customer_nodes customer1,customer2,customer3;
    customer1.name="Evan";
    customer1.next=&customer2;
    customer2.name="Bogdan";
    customer2.next=&customer3;
    customer3.name="Cian";
    customer3.next=NULL;
    
    //check if customer with the name exists
    if(find_customer(&customer1,"Cian")){
        std::cout<<"Customer exists."<<std::endl;
    }else{
        std::cout<<"Customer doesn't exist."<<std::endl;
    }
    
    return 0;
}