#include<iostream>
using namespace std;
class Student {
    private:
        int registrationNumber=733;
    public:
        string name;
        int age;

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Registration Number: " << registrationNumber << endl;
        }
        
};
int main() {
    Student student1;
    student1.name = "Alice";
    student1.age = 20;
    student1.display();

    return 0;
}