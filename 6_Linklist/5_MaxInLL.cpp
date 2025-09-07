#include<iostream>

class node{
    public:
        int data;
        class node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    class node *t,*last;
    first = new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int MAX(class node *p){
    int max=INT32_MIN;
    while (p)
    {
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
    
} 



int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    std::cout<<std::endl;
    std::cout<<MAX(first);


}