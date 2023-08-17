#include<iostream>

using namespace std;

void copy(char s1[],char s2[]);

int main(){
    char name1[100]="w3resource";
    char name2[100];
    copy(name1,name2);
    cout<<name1<<endl;
    cout<<name2<<endl;
}
void copy(char s1[],char s2[]){
    static int n=0;
    if(s1[n]=='\0'){
        s2[n]=s1[n];
        return;
    }
    s2[n]=s1[n];
    n++;
    copy(s1,s2);
}