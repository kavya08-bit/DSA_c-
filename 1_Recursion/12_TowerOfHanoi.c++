#include<iostream>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"Move from tower "<<A<<" to tower "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(){

    TOH(3,'A','B','c');

}