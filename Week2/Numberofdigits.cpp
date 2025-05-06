//Write a program that gets n as input and print the number of digits in the number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n value: ";
    cin >> n;
    int count = 0;
    while(n>0){
        int id=n%2;
            count = count + 1;
            n=n/10;
    }
    cout << count;
    return 0;
}
