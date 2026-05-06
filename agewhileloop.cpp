#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    int i = 0;
    while (i < 1) {
        if (age >= 18) {
            cout << "The person is eligible to vote." << endl;
        } else {
            cout << "The person is ineligible to vote." << endl;
        }
        i++;
    }

    return 0;
}
