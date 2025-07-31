#include<iostream>
#include<stdlib.h>
#include<stdio.h>
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

struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(i=0;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(j=0;i<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }   
    arr3->length = arr1->length+arr2->length;
    arr3->size = 10;

    return arr3;


}



int main(){
    struct Array arr1 ={{2,3,4,5,6},10,5};
    struct Array arr2 ={{7,8,9,10,11},10,5};
    struct Array *arr3;
   arr3 =  Merge(&arr1,&arr2);
    Display(*arr3);
}