#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    Student(){
        name="Riya";
        rollno=100;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Constructor called!"<<endl;
    }
    };


int main(){
    Student student1;
}