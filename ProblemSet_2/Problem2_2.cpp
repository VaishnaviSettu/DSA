#include <iostream>
//Write a program to take x and print multiples of x till 1000

using namespace std;
int main() {
    // Write C++ code here
    int x;
    cout << "Enter x value: ";
    cin >> x;
    
    for(int i = 1; i<=1000; i++){
        cout << x*i << endl;
    }
    
    return 0;
}
