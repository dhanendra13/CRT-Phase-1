#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(): balance(10000){}
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance."<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }
    }
    void showbalance(){
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    ATM a;
    int amount;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    a.withdraw(amount);
    a.showbalance();
    return 0;
}