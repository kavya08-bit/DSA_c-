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

int BinarySearch(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    
    while (l<=h)
    {
        mid = (l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}


int R_binarySearch(int a[],int l,int h,int key){
    int mid;

    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return R_binarySearch(a,l,mid-1,key);
        else
            return R_binarySearch(a,mid+1,h,key);

    }
    return -1;
}



int main(){
    struct Array arr ={{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,5);
    cout<<R_binarySearch(arr.A,0,arr.length,5);

    Display(arr);
}