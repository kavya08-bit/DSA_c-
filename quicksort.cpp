#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}

int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;

    do
    {
        do
        {
            i++;
        } while (A[i]<=pivot);

        do
        {
            j--;
        } while (A[j]>pivot);
        
        if(i<j){
            swap(&A[l],&A[j]);
        }
    } while (i<j);
    swap(&A[l],&A[j]);
    return j;
    
}

void quicksort(int A[],int l,int h){
    int j;
    if(l<h){
        j= partition(A,l,h);
        quicksort(A,l,j);
        quicksort(A,j+1,h);
    }
}


int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5,__INT32_MAX__},n=11;
    quicksort(A,0,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}