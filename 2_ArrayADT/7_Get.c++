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

int get(struct Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
}



int main(){
    struct Array arr ={{2,3,4,5,6},20,5};

    cout<<get(arr,2);

    Display(arr);
}