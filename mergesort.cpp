#include <iostream>

void swap (int *x,int *y){
    int temp = *x;
    *x=*y;
    *y =temp;
}
void Merge(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}
 
void IterativeMergeSort(int A[], int n){
    int p;
    for (p=2; p<=n; p=p*2){
        for (int i=0; i+p-1<n; i=i+p){
            int low = i;
            int high = i+p-1;
            int mid = (low+high)/2;
            Merge(A, low, mid, high);
        }
    }
    if (p/2 < n){
        Merge(A, 0, p/2-1, n-1);
    }
}

void RecursiveMergeSort(int A[], int low, int high){
    if (low < high){
        // Calculate mid point
        int mid = low + (high-low)/2;
 
        // Sort sub-lists
        RecursiveMergeSort(A, low, mid);
        RecursiveMergeSort(A, mid+1, high);
 
        // Merge sorted sub-lists
        Merge(A, low, mid, high);
    }
}


int main(){
    int A[]={3,5,6,4,1,2,9,0,7,5},n=10;
    IterativeMergeSort(A,10);

    for (int i = 0; i < 10; i++)
    {
        std::cout<<A[i]<<std::endl;
    }
    
}