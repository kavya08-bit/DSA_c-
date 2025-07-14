#include<iostream>
using namespace std;

int x = 0;//global varible

int fun(int n){
    // static int x = 0; // static varible
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    r = fun(5);
    cout<<r ;

    // r = fun(5);
    // cout<<r ;

}

/*in static varible we create a varible that is in a func and global varible is outside of any func output will be same for both
but when we create global and call func many times value will increase like in above code for first call the value of x is 5
and after 2 func call the value of x will be 10*/