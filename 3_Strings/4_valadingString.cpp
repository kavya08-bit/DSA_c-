#include<iostream>


int valid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]>='A'&&name[i]<='Z') && !(name[i]>='a'&&name[i]<='z') && !(name[i]>=48&&name[i]<=57)){
            return 0; 
        }
    }
    return 1;

}

int main(){
    char* name = "ani?123";
    if(valid(name)){
        std::cout<<"valid string";
    }
    else{
        std::cout<<"invalid string";
        }
}