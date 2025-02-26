#include <iostream>
//Write a program which takes two values x and y. Prints x for y number of times.
using namespace std;

int main() {
    // Write C++ code here
    int x, y;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;
    
    for(int i = 1; i<=y; i++){
        cout << x << endl;
    }
    
    return 0;
}
