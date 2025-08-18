#include<iostream>

int main(){
    char A[]= "painter";
    char B[]= "painting";
    int i,j;

    for(i=0,j=0;A[i]!='\0' && B[i]!='\0';i++,j++){  
        if(A[i]!=B[j])
            break;
    }

    if(A[i]==B[j])
        std::cout<<"Equal";
    else if(A[i]<B[j])
        std::cout<<"smaller";
    else
        std::cout<<"greater";


}