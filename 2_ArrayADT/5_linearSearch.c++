#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){

    int i;
    cout<<" all element"<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

}

void swap(int *x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr,int key){

    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]); //transposition
            swap(&arr->A[i],&arr->A[0 ]); //move to front/head

            return i;
        }
    }
    return -1;
}



int main(){
    struct Array arr ={{2,3,4,5,6},10,5};
    cout<<LinearSearch(&arr,5);
    Display(arr);
}