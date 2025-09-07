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

class node *Lsearch(class node *p,int key){
    while (p)
    {
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;
    
}

class node *Rsearch(class node *p,int key){
    if(p==NULL)
        return NULL;
    if(key=p->data)
        return p;
    return Rsearch(p->next,key);
}

class node *Lsearch(class node *p,int key){
    // move to first operation for time complexity
    class node *q;
    while (p!=NULL)
    {
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        
        }
        q=p;
        p=p->next;
    }
    return NULL;
    
}

int main(){
    class node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    temp=Lsearch(first,7);
    if(temp)
        std::cout<<temp->data;


}