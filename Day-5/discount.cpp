#include<iostream>
using namespace std;
void discount(int bill)
{int n;
    cout<<"Enter the bill amount: ";
    cin>>n;
    float discount=n*0.10;
    int final_bill=n-discount;
    cout<<"The final bill after discount is: "<<final_bill<<endl;
}
int main(){
    discount(0);
    return 0;
}