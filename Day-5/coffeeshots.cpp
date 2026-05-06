#include<iostream>
using namespace std;
void coffeeshots()
{
    int n;
cout<<"Enter the number of coffeeshots: ";
cin>>n;
int volume=n*30;
cout<<"The total volume of coffee is: "<<volume<<" ml"<<endl;
}
int main(){
    coffeeshots();
    return 0;
}