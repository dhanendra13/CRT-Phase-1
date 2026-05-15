#include<iostream>
using namespace std;
class Player{
    public:
    virtual void show()=0; //null function
};
class Cricketer: public Player{
    public:
    void show(){
        cout<<"This is a cricketer."<<endl;
    }
};


int main(){
Cricketer c1;
c1.show();
return 0;ī

}