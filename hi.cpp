#include<iostream>
using namespace std;
int calc(int,int);
int main(){
    int a,b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<"The result is "<<calc(a,b);
    return 0;
}
int calc(int a1,int a2){
    return a1+a2;
}