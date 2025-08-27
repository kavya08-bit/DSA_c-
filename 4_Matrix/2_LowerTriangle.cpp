#include<iostream>

class lowerTriangle{

    private:
        int *A;
        int n;
    public:
        lowerTriangle(){
            n=2;
            A=new int[2*(2+1)/2];
        }

        lowerTriangle(int n){
            this->n = n;
            A=new int[n*(n+1)/2];
        }
        ~lowerTriangle(){
            delete[]A;
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        int get_dimension(){
            return n;
        }
};

void lowerTriangle::set(int i,int j,int x){
    if(i>=j){
        A[i*(i-1)/2 + j-1]=x;
    }
}

int lowerTriangle::get(int i,int j){
    if(i>=j)
        return A[i*(i-1)/2 + j-1];
    return 0;
}

void lowerTriangle::display(){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
                std::cout<<A[i*(i-1)/2 + j-1]<<" ";
            else
                std::cout<<"0 ";
        }
        std::cout<<std::endl;
    }
}

int main(){

    int d;
    std::cout<<"enter d";
    std::cin>>d;

    lowerTriangle lm(d);

    int x;
    std::cout<<"enter all element  ";
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
            {
                std::cin>>x;
                lm.set(i,j,x);
            }
    }
    lm.display();
}