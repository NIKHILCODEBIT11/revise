#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
    int a,b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<"Before swap :-"<<endl<<"a is "<<a<<endl<<"and b is "<<b<<endl;
    swap(&a,&b);
    cout<<"After swap :-"<<endl<<"a is "<<a<<endl<<"and b is "<<b<<endl;
    return 0;
}
void swap(int *a1,int *a2){
    int t;
    t=*a1;
    *a1=*a2;
    *a2=t;
}