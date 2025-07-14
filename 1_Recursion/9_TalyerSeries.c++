#include<iostream>
using namespace std;

// double e(int x,int n){
//     static double p=1,f=1;
//     double r;

//     if(n==0){
//         return 1;
//     }
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;

// }

// by using horner rule

// double e(int x,int n){
//     static double s ;


//     if(n==0){
//         return s;
//     }
//     s=1+x*s/n;
//     return e(x,n-1);
// }

// using loop

double e(int x,int n){
    static double s=1 ;
    int i;
    double num =1;
    double dem=1;
    for(i=1;i<=n;i++){
        num*=x;
        dem*=i;
        s+=num/dem;
    }
    return s;
}


int main(){
    cout<<e(1,10);
}
