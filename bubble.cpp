#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}

void bubble(int A[],int n){
    int i,j,flag=0;

    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            } 
        }
        if(flag==0){
            break;
        }
    }

}

int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5},n=10;
    bubble(A,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}