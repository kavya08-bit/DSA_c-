#include<iostream>

class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    public:
        Sparse(int m,int n,int num){
            this->m = m;
            this->n=n;
            this->num = num;
            ele=new Element[this->num];
        }
        ~Sparse(){
            delete[] ele;
        }

        int add(Sparse &s){
            int i,j,k;
            if(m!=s.m || n!=s.n)
                return NULL;
            Sparse *sum = new Sparse(m,n,num+s.num);

            i=j=k=0;
            while(i<num && j<s.num){
                if(ele[i].i<s.ele[j].i)
                    sum->ele[k++]=ele[i++];
                else if(ele[i].i>s.ele[j].i)
                    sum->ele[k++]=ele[j++];
                else{
                    if(ele[i].j<s.ele[j].j)
                    sum->ele[k++]=ele[i++];
                    else if(ele[i].j>s.ele[j].j)
                    sum->ele[k++]=ele[j++];
                    else{
                        sum->ele[k]=ele[i];
                        sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
                    }
                }

            }
            for(;i<num;i++)sum->ele[k++]=ele[i];
            for(;j<s.num;j++)sum->ele[k++]=s.ele[j];
            sum->num = k;
            return sum;
        }
        
        void read(){
            std::cout<<"enter non zero ele";
            for(int i=0;i<num;i++){
                std::cin>>ele[i].i>>ele[i].j>>ele[i].x;
            }
        }

        void display(){
            int k=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(ele[k].i==i && ele[k].j==j)
                        std::cout<<ele[k++].x<<" ";
                    else
                        std::cout<<"0 ";
                }
                std::cout<<std::endl;
            }
        }

};

int main(){
    Sparse s1(5,5,5);
    Sparse s2(5,5,5);
    s1.read();
    s2.read();
    Sparse sum=s1 + s2;
    s1.display();
    
}