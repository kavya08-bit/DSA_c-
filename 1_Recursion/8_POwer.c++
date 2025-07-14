#include<iostream>
using namespace std;

// int power(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     return power(m,n-1)*m;

// }

int power(int m, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return power(m*m, n / 2);
    return m * power(m*m,(n-1)/2);
}


int main(){
    int r;
    r = power(3,5);
    cout<<r;
}