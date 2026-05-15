#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    //encapsulation is achieved by making balance private and providing public methods to access and modify it
    void setbalance(int b){
        this ->balance=b;
    }
    void withdraw(int amount){
        if (amount>balance){
            cout<<"Insufficient Balance."<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }
        }
        int getbalance(){
            return balance;
        }
    };

    int main(){
        int n;
        cout<<"Enter amount to withdraw: ";
        cin>>n;
        ATM a;
         a.setbalance(10000);
         a.withdraw(n);
        cout<<"Remaining Balance: "<<a.getbalance()<<endl;
       
        cout<<"Initial Balance: "<<a.getbalance()<<endl;
       
        return 0;
    }
