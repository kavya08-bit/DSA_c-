

#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}

void ShellSort(int A[], int n){
    for (int gap=n/2; gap>=1; gap/=2){
        for (int j=gap; j<n; j++){
            int temp = A[j];
            int i = j - gap;
            while (i >= 0 && A[i] > temp){
                A[i+gap] = A[i];
                i = i-gap;
            }
            A[i+gap] = temp;
        }
    }
}

int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5},n=10;
    ShellSort(A,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}