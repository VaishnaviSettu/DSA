#include <iostream>
// Write a program to check whether a triangle can be formed with the given values for the angles.
using namespace std;
int main() {
    int t1, t2, t3, sum;
    cout << "Enter the value of angles for the triangle: ";
    cin >> t1 >> t2 >> t3;
    sum = t1 + t2+ t3;
    if (sum == 180)
    cout << "Triangle created successfully";
    else
    cout << "Triangle cannot be formed";
    return 0;
}
