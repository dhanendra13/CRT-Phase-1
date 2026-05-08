#include<iostream>
using namespace std;
class Player{
    public:
 virtual void show() //null function
    {
        cout<<"This is a player."<<endl;
    }
};
class Cricketer: public Player{
    public:
    void show(int n=5){
        cout<<"This is a cricketer."<<endl;
    }
};


int main(){
Cricketer c1;
c1.show();
return 0;

}