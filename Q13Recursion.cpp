#include<iostream>

using namespace std;

int LCM(int x,int y,int i=2);

int main(){
    cout<<LCM(9,7)<<endl;
}
int LCM(int x,int y,int i){
    if(i%x==0&&i%y==0){
        return i;
    }
    return LCM(x,y,i+1);
}