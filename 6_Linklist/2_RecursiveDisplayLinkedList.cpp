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

// void Display(class node *p){
//     while (p!=NULL)
//     {
//         std::cout<<p->data<<" ";
//         p=p->next;
//     }
    
// }
void RDisplay(class node *p){
    if(p!=NULL){
        std::cout<<p->data<<" ";  // for printing reverse of link list we can just switch tha 36 and 37 line
        RDisplay(p->next);
    }

}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    RDisplay(first);

}