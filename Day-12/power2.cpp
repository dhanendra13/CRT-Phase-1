#include<iostream>
using namespace std;
long long power(long long a, long long b){
    if(b==0)
    return 1;
    return a*power(a,b-1);
}

int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    cout<<power(a,b);
    return 0;
}