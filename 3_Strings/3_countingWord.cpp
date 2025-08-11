#include<iostream>

int main(){
    char s[]= "How are you";
    int i,vcount=0,ccount=0,word=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            vcount++;
        }
        else if((s[i]>=65 && s[i]<=90)||s[i]>=97 && s[i]<=132){
        ccount++;
        }

        if(s[i]==' ' && s[i-1]!=' '){
            word++;
        }


    }
    std::cout<<vcount<<std::endl;
    std::cout<<ccount<<std::endl;
    std::cout<<word<<std::endl;


}