#include<iostream>
using namespace std;

int factorial(int n){
    if(n>0){
        return n*factorial(n-1);
    }
    else if(n==0){
        return 1;
    }
}

int nCr(int n,int r){ // using factorial
    int num,dem;
    num = factorial(n);
    dem = factorial(r)*factorial(n-r);

    return num/dem;
}

int rec_nCr(int n,int r){ // using recursion
    if(n==r||r==0){
        return 1;
    }else{
        return rec_nCr(n-1,r-1)+rec_nCr(n-1,r);
    }

}

int main(){

    cout<<nCr(5,2)<<endl;;
    cout<<rec_nCr(5,2);


}