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

int main(){
    
    Matrix x(5,4);
    x.print();
    x.set(2,3,8);
    x.print();
    return 0;
}