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
int R_count(class node *p){
    if(p!=0){
        return R_count(p->next)+1;
    }
    else{
        return 0;
    }
}

void Display(class node *p){
    while (p!=NULL)
    {
        std::cout<<p->data<<" ";
        p=p->next;
    }
    
}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    Display(first);
    std::cout<<std::endl;
    std::cout<<R_count(first);

}