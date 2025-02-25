#include <iostream>
//Write a program that takes an integer, then a string, then a char from the user and prints them in the screen.
using namespace std;
int main() {
    int num;
    string str;
    char ch;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a character: ";
    cin >> ch;
    cout << num << endl;
    cout << str << endl;
    cout << ch;
    return 0;
}
