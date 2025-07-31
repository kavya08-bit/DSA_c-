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

void InsertSort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

int IsSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

void Rearrange(struct Array *arr){

    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j){
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[j]>=0)
        {
            j--;
        }
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
        
    }


}


int main(){
    struct Array arr ={{2,3,4,5,6},20,5};
    // InsertSort(&arr,1);
    // Rearrange(&arr);
    cout<<IsSorted(arr);
    Display(arr);
}