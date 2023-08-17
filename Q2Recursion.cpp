#include<iostream>

using namespace std;

int sum(int number1,int number2);

int main(){
    cout<<sum(5,10);
}
int sum(int number1,int number2){
    if(number1==number2){
        return number2;
    }
    else{
        return number1+sum(number1+1,number2);
    }
}