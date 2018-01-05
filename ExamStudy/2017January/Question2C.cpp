#include <iostream>
#include <cstring>

class Matrix{
    public:
        Matrix(int row, int col):r_(row),c_(col),data(new int[r_*c_]){
            memset(data,0,r_*c_*sizeof(int));
        };
        
        virtual ~Matrix(){ delete[] data; };
        
        virtual void set(int row, int col, int val){
            //index has the same position in a 1D array as a 2D array
            int index = (row*c_)+col;
            *(data+index)=val;
        };
        
        void print(){
            int index=0;
            for(int i=0; i<r_; i++){
                for(int j=0; j<c_; j++){
                    std::cout<<*(data+index)<<",";
                    index++;
                }
                std::cout<<std::endl;
            }
            std::cout<<std::endl;
        };
        
    protected:
        int r_,c_;
        int *data;
};

class SymMatrix:public Matrix{
    public:
        //pass the value r into the Matrix 
        SymMatrix(int r):Matrix(r,r){};
        
        //override the virtual set function for the class Matrix
        void set(int row, int col, int val){
            int index = (row*c_)+col;
            *(data+index)=val;
            index = (col*c_)+row;
            *(data+index)=val;
        } 
};

int main(){
    
    SymMatrix x(5);
    x.print();
    x.set(2,3,8);
    x.print();
    return 0;
}

//The virtual keyword was needed in the delcartation of the set method in the Matrix class
//in order for the function to then be overridden in the SymMatrix class.