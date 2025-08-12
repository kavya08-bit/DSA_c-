#include<iostream>

int main(){
    char A[]= "kavya";
    char B[7],t;

    int i,j;

    // using multiple array
    // for(i=0;A[i]!='\0';i++){}
    // i=i-1;
    // for(j=0;i>=0;j++,i--){
    //     B[j]=A[i];
    // }
    // B[j]='\0';
    // std::cout<<A<<std::endl;
    // std::cout<<B;

    // using single array
    for(j=0;A[j]!='\0';j++){}
    j = j-1;
    for(i=0;i<j;i++,j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    std::cout<<A<<std::endl;

    
}