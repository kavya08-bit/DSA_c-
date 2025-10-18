#include<iostream>
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    public:
        Queue(){
            front=rear=-1;
            size=10;
            Q=new int[size];
        }
        Queue(int size){
            front=rear=0;
            this->size=size;
            Q=new int[this->size];
        }
        void enqueue(int x);
        int dequeue();
        void display();
};

void Queue::enqueue(int x)
{
    if((rear+1)%size==front)
        cout<<"Queue full\n";
    else
    {
        rear=(rear+1)%size;
        Q[rear]=x;

    }
}

int Queue::dequeue(){
    int x=-1;
    if(front==rear)
        cout<<"Queue is empty\n";
    else
    {
        x=Q[front+1];
        front=(front+1)%size;
    }
    return x;
}

void Queue::display()
{
    int i=front+1;

    do
    {
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    } while (i!=(rear+1)%size);
    
}

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

}