#include<iostream>
using namespace std;

int fib(int n){// using loops
    int t0=0,t1=1,s=0,i;
    if(n<=1){
        return n;
    }
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int r_fib(int n){ //using recursion
    if(n<=1){
        return n;
    }else{
        return r_fib(n-2)+r_fib(n-1);
    }
}
// using memoization func for decreasing no of calls
int F[10];
int m_fib(int n){
    if(n<=1){
        F[n] =n; 
        return n;
    }else{
        if(F[n-2]==-1){
            F[n-2]=m_fib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=m_fib(n-1);
        }
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }

}

int main(){

    for(int i=0;i<10;i++){
        F[i] = -1; 
    }
    cout<<fib(5)<<endl;
    cout<<r_fib(6)<<endl;
    cout<<m_fib(7)<<endl;


}