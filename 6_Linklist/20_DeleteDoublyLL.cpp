#include<iostream>

class node{
    public:
        class node *prev;
        int data;
        class node *next;
}*first=NULL;

void create(int A[],int n){
    class node *t,*last;
    int i;
    first=new node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
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

int Delete(class node *p,int index){
    int x=-1,i;

    if(index<1 || index> count(p))
        return -1;
    if(index==1){
        first=first->next;
        if(first)first->prev=NULL;
        
        x=p->data;
        delete p;
        }      
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)p->next->prev=p->prev;
        x=p->data;
        delete p;
        
    }  
    return x;

}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    Delete(first,1);
    std::cout<<"Length is "<<count(first)<<std::endl;;
    Display(first);
}