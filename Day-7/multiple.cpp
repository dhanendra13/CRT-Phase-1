#include<iostream>
using namespace std;

//Base Class of Player class
class Player{
    public:
    string name;
    int age;
    void setName(string n){
        name = n;
    }

};

//Derived Class and Base Class of IndianCricketer class
class Cricketer{
    public:
    int runs;
    void setRuns(int r){
        runs = r;
    }
    
    
};
class IndianCricketer: public Cricketer, public Player{
    public:
    string state;
    void setstate(string s){
        state=s;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"State: "<<state<<endl;
    }
};

int main(){
    int r;
    cout<<"Enter runs: ";
    cin>>r;
    string s;
    cout<<"Enter state: ";
    cin>>s;
    IndianCricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(r);
    c1.setstate(s);
    c1.show();
    return 0;


}