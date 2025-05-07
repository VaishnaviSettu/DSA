#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int A=4, B=4, k=1;
    long long power=pow(A,B);
        int i=1;
        
        while(power>0){
            int ans=power%10;
            if(k==i){
                cout<< ans;
            }
            i++;
            power=power/10;
        }
    return 0;
}
