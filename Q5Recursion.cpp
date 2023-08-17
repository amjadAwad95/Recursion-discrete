#include<iostream>

using namespace std;

int numberDiget(int n);

int main(){
    cout<<numberDiget(154548);
}
int numberDiget(int n){
    static int size=0;
    if(n==0){
        return size;
    }
    size++;
    return numberDiget(n/10);
}