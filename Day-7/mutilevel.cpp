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
class Cricketer: public Player{
    public:
    int runs;
    void setRuns(int r){
        runs = r;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};
class IndianCricketer: public Cricketer{
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
    cin>>r;
    string s;
    cin>>s;
    IndianCricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(r);
    c1.setstate(s);
    c1.show();
    return 0;


}