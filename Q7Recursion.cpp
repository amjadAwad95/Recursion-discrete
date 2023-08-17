#include<iostream>

using namespace std;

int GCD(int n1,int n2);

int main(){
    cout<<GCD(40,50);
}
int GCD(int n1,int n2){
    while(n1!=n2){
        if(n1>n2){
            return GCD(n1-n2,n2);
        }
        else{
            return GCD(n1,n2-n1);
        }
    }
    return n1;
}