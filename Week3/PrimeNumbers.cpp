//https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int flag = 0;
        for(int i = 2; i<n; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }
};
