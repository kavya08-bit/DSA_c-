#include<iostream>

class Stack{
    public:
        int size;
        int top;
        int *s;
};

void create(class Stack *st){
    std::cout<<"Enter size";
    std::cin>>st->size;
    st->top=-1;
    st->s= new int[st->size];
}

void Display(class Stack st){
    int i;
    for(i=st.top;i>=0;i--){
        std::cout<<st.s[i]<<" ";
    }
    std::cout<<std::endl;

}

void push(class Stack *st,int x)
{
    if(st->top==st->size-1)
        std::cout<<"Stack Overflow\n";
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(class Stack *st)
{
    int x=-1;
    if(st->top==-1)
        std::cout<<"Stack underflow\n";
    else
    {
        x=st->s[st->top--];
    }
    return x;
}

int peek(class Stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0){
        std::cout<<"invalid Index\n";
    }
    x=st.s[st.top-index+1];
    return x;
}

int isEmpty(class Stack st){
    if(st.top==-1)
        return 1;
    return 0;
}

int isFull(class Stack st){
    return st.top==st.size-1;
}

int stackTop(class Stack st)
{
     if(!isEmpty(st))
        return st.s[st.top];
    return -1;
}

int main(){
    class Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    std::cout<<peek(st,1);
    std::cout<<std::endl;
    Display(st);
}