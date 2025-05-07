#include <iostream>
using namespace std;

int main() {
    int n=2345;
    int lastnum= n%10; //5
        int firstnum = n/10;
        while(firstnum >=10){
            firstnum= firstnum/10;
        }
        int sum=lastnum + firstnum;
        cout<< sum;    
}
