#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}

void selection(int A[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
            swap(&A[i],&A[k]);
        }
    }

}

int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5},n=10;
    selection(A,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}