#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    for (int i = n; i >= 1; i--) { 
        for (int j = i; j >= 1; j--) { 
            cout << j;
        }
        cout<<endl;
    }
    return 0;
}
