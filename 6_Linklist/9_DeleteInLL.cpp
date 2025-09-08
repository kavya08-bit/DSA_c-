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

int count(class node *p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

int Delete(class node *p,int index){
    class node *q=NULL;
    int x=-1,i;

    if(index<1 || index> count(p))
        return -1;
    if(index==1){
        q=first;
        x=first->data;
        delete q;
        return x;
    }      
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }  

}
int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    Delete(first,3);
    Display(first);

}