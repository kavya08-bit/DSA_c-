#include<iostream>

// using hash table
// int main(){

//     char A[] = "finding";
//     int H[26],i;

//     for(i=0;A[i]!='\0';i++){
//         H[A[i]-97] +=1;
//     }

//     for(i=0;i<26;i++){
//         if(H[i]>1){
//             std::cout<<i+97;
//             std::cout<<H[i];
//         }
//     }
// }

// using bitwise

int main(){
    char A[] = "finding";
    int h=0,x=0;
    
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);

        if((x&h)>0){
            std::cout<<A[i];
            std::cout<<" is duplicate";
        }
        else{
            h=x|h;
        }
    }
}