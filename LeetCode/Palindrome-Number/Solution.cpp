1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0) return false;
5        int original = x, reversed = 0;
6        while (x != 0) {
7            int digit = x % 10;
8            if (reversed > (INT_MAX - digit) / 10) return false;
9            reversed = reversed * 10 + digit;
10            x /= 10;
11        }
12        return original == reversed;
13    }
14};
15