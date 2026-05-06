#include<iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are:" << endl;

    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}