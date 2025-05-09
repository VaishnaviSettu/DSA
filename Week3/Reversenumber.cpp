// Write a program that gets n as input and print the reverse of the number
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    // Write C++ code here
    int n, rev=0;
    cout<<"Enter the n value: ";
    cin>>n;
    int x=n;
    while(n>0){
        int ld=n%10;
        rev=rev * 10 + ld;
        n=n/10;
    }
    
    cout << rev;

    return 0;
}
