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

int main(){
    int r;
    r=factorial(5);
    cout<<r;

}