#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void swap(int *x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Display(struct Array arr){

    int i;
    cout<<" all element"<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

}

void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B=new int[arr->length * sizeof(int)];

    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }

}

void Reverse2(struct Array *arr){

    int i,j;
    for(i=0,j=arr->length;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}


int main(){
    struct Array arr ={{2,3,4,5,6},20,5};

    Reverse(&arr);
    Display(arr);
}
