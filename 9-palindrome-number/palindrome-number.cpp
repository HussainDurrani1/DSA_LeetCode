class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long originalNum = x;
        long long reversedNum = 0;
        int remainder;
        while (x > 0){
            remainder = x % 10;
            reversedNum = reversedNum * 10 + remainder;
            x /= 10;
        }
        return originalNum == reversedNum;
    }
};