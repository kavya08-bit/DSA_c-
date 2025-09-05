#include<iostream>

class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    public:
        Sparse(int m,int n,int num){
            this->m = m;
            this->n=n;
            this->num = num;
            ele=new Element[this->num];
        }
        ~Sparse(){
            delete[] ele;
        }
        
        void read(){
            std::cout<<"enter non zero ele";
            for(int i=0;i<num;i++){
                std::cin>>ele[i].i>>ele[i].j>>ele[i].x;
            }
        }
        void display(){
            int k=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(ele[k].i==i && ele[k].j==j)
                        std::cout<<ele[k++].x<<" ";
                    else
                        std::cout<<"0 ";
                }
                std::cout<<std::endl;
            }
        }
};

int main(){
    Sparse s1(5,5,5);
    s1.read();
    s1.display();
    
}