#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    int *ptr=&a;
    cout<<"Before swapping: "<<*ptr<<" "<<b<<endl;
    ptr=&b;
    cout<<"After swapping: "<<*ptr<<" "<<a<<endl;
    return 0;
}