#include<iostream>
using namespace std;

int sum(int n){//using recursion
    if(n>0){
    return n +sum(n-1);
    }
    else{
        return 0;
    }
}

int l_sum(int n){//using loop
    int i,s=0;
    for(i=1;i<=n;i++){
        s = s+i;
    }
    return s;

}

int main(){
    int r,lr;
    r = sum(5);
    lr = l_sum(4);
    
    cout<<r<<" ";
    cout<<lr;


}