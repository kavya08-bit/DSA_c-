#include<iostream>

int main(){
    char A[]="decimal";
    char B[]="medical";
    int i,h[26]={0};

    for(int i=0;A[i]!='\0';i++){
        h[A[i]-97] +=1;
    } 

    for(int i=0;B[i]!='\0';i++){
        h[B[i]-97] -=1;

        if(h[A[i]-97]<0){
            std::cout<<"not anagram";
            break;
        }
    }
    if(B[i]=='\0'){
        std::cout<<"is anagram";
    }
}