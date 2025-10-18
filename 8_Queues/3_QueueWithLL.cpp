#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
};

class Queue{
    private:
        node* front;
        node* rear;
    public:
        Queue();
        ~Queue();
        void enqueue(int x);
        int dequeue();
        bool isEmpty();
        void display();
};

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}
 
void Queue::enqueue(int x) {
    node* t = new node;
    if (t == nullptr){
        cout << "Queue Overflow" << endl;
    } else {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr){
            front = t;
            rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}

int Queue::dequeue() {
    int x = -1;
    node* p;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}
 
bool Queue::isEmpty() {
    if (front == nullptr){
        return true;
    }
    return false;
}
 
Queue::~Queue() {
    node* p = front;
    while (front){
        front = front->next;
        delete p;
        p = front;
    }
}
 
void Queue::display() {
    node* p = front;
    while (p){
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q;
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }
 
    q.display();
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
    q.dequeue();
 
    return 0;
}