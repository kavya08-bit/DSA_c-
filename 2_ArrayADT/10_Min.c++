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

int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int main(){
    struct Array arr ={{2,3,4,5,6},20,5};

    cout<<Min(arr);
    Display(arr);
}