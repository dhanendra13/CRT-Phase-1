#include<iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;

int *p = &a;
int *q = &b;

int temp = *p;
*p = *q;
*q = temp;

cout << "After swapping: " << a << " " << b;
return 0;
}   