#include <iostream>
//Write a program to get firstName and lastName and n as input and print fullName that is firstName+lastName for n times.

using namespace std;
int main() {
    // Write C++ code here
    string firstname, lastname;
    int n;
    cout << "Enter Firstname: ";
    cin >> firstname;
    cout << "Enter Lastname: ";
    cin >> lastname;
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i<=n; i++){
        cout << firstname + lastname << endl;
    }
    return 0;
}