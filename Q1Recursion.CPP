#include<iostream>

using namespace std;

void printNaturalNumbers();
bool x(int a);

int main(){
   printNaturalNumbers();
   
}
void printNaturalNumbers(){
    static int n=1;
    if(n>=1&&n<=50){
        cout<<n++<<" ";
        
    }
    printNaturalNumbers();
}
