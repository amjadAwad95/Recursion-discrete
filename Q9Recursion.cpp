#include<iostream>

using namespace std;

void reservString(char a[]);

int main(){
    char a[100]="a";
    reservString(a);
}
void reservString(char a[]){
    static int size=0;
    if(a[size]=='\0'){ 
        static int n=size-1;
        if(n<0){
            return;
        }
        cout<<a[n];
        n--;
        reservString(a);
    }
    size++;
    reservString(a);
}