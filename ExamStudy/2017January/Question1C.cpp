#include <iostream>

//create template
template <typename T>
class Vector{
    public:
        //replace all primitive type with T
        Vector(T x, T y):x_(x), y_(y) {};
        Vector(T n): x_(n), y_(n) {};
        
    protected:
    T x_, y_;
};


//question does not ask for main method
int main(){
    //create a vector test1 with a primitive type double
    Vector <double> test1(4.32, 5.67);
    //create a vector test2 with a primitive type int
    Vector <int> test2(9);
    
    return 0;
}