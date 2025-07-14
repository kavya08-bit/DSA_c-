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


int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}



int main(){
    struct Array arr ={{2,3,4,5,6},20,5};

    cout<<Max(arr);

    Display(arr);
}