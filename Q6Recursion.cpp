#include<iostream>

using namespace std;

int numberDiget(int n);

int main(){
    cout<<numberDiget(255);
}
int numberDiget(int n){
    static int sum=0;
    if(n==0){
        return 0;
    }
    
    return  (n%10)+numberDiget(n/10);
}