#include<iostream>
using namespace std;
int power(int b){
    if(b==0)
    return 0;
    if(b==1)
    return 1;
    return (b%2==0) && power(b/2);
}


int main(){
    int b;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<power(b);
    return 0;

}