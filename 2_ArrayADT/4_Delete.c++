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


void Delete(struct Array *arr,int index){

    int x=0;
    int i;
    if(index>=0 && index<arr->length){
        x=arr->A[index];

        for(i=index;i>arr->length-1;i--){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}


int main(){
    struct Array arr ={{2,3,4,5,6},10,5};

    Delete(&arr,4);
    Display(arr);
}