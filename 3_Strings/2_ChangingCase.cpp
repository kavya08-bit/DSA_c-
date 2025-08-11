#include<iostream>

int main(){
    char A[]="WeLcOmE";
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90){
            A[i]+=32;
        }
        else if(A[i]>='a' && A[i]<=132){
            A[i]-=32;
        }
    }
    std::cout<<A;
}