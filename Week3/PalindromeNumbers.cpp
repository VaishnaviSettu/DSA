//https://www.geeksforgeeks.org/problems/palindrome0746/1
class Solution {
  public:
    bool isPalindrome(int n) {
        int x=n;
        int sum=0;
        while (n>0)
        {
            int lastdigit = n%10;
            sum = sum * 10 + lastdigit;
            n=n/10;
        }
        return(sum == x);
    }
};
