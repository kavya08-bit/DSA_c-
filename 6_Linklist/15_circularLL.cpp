#include<iostream>

class node{
    public:
        int data;
        class node *next;
}*head;

void create(int A[],int n){
    int i;
    class node *t,*last;
    head=new node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last =t;
    }
}

void display(class node *h){
    do
    {
        std::cout<<h->data<<" ";
        h=h->next;
    } while (h!=head);
    std::cout<<std::endl;
    
}

void RDisplay(class node *h){
    static int flag=0;
    if(h !=head || flag==0){
        flag=1;
        std::cout<<h->data<<" ";
        RDisplay(h->next);
    }
    flag=0;
}

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    display(head);

}