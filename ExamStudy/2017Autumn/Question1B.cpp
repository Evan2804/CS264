#include <iostream>

int my_string_len(char *s){
    int i=0;
    
    while(*(s+i)!='\0'){
        i++;
    }
    
    return i;
}

int main(){
    
    char name[]="Evan";
    
    std::cout<<"Evan contains "<<my_string_len(name)<<" letters."<<std::endl;

    return 0;
}