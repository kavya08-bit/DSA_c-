#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}

void insertion(int A[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while (j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
        
    }


}

int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5},n=10;
    insertion(A,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}