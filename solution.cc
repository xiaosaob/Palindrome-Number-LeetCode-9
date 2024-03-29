// Determine whether an integer is a palindrome. Do this without extra space.

// click to show spoilers.

// Some hints:
// Could negative integers be palindromes? (ie, -1)

// If you are thinking of converting the integer to string, note the restriction of using extra space.

// You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

// There is a more generic way of solving this problem.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int div = 1;
        int tmp = x;
        while(tmp >= 10) {
            div *= 10;
            tmp /= 10;
        }
        while(x) {
            int firstDigit = x/div;
            int lastDigit = x%10;
            if(firstDigit != lastDigit) return false;
            x = x%div;
            x /= 10;
            div /= 100;
        }
        return true;
    }
};
