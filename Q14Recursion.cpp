#include<iostream>

using namespace std;

void evenOrOdd(int x,int y);

int main(){
    evenOrOdd(2,10);
}
void evenOrOdd(int x,int y){
    if(x>y){
        return;
    }
    if(x%2==0){
        cout<<"The number "<<x<<" is even"<<endl;
    }
    if(x%2!=0){
        cout<<"The number "<<x<<" is odd"<<endl;
    }
    evenOrOdd(x+1,y);
}