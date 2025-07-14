#include<iostream>
using namespace std;

struct Array
{
    int *A;
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

int main()
{

    struct Array arr;
    int n,i;
    cout<<"enter size of array"<<endl;
    cin>> arr.size;
    arr.A = new int [arr.size];

    cout<<"enter number of numbers"<<endl;
    cin>>n;

    cout<<"enter all element"<<endl;
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;

    Display(arr);

    

}