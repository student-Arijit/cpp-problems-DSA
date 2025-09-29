/*Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
Constraints:
-2^31 <= x <= 2^31 - 1
*/

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x <  0) { 
            return false;
        } else {
            int i = 0;
            unsigned int num1 = 0;
            unsigned int num2 = x;
            
            while(x) {
                int rem = x % 10;
                x /= 10;
                num1 = num1*10 + rem;
                i++;
            }
            
            return (num1 == num2);
        }
    }
};

int main() {
    Solution pal;
    int num;
    
    std::cout << "Enter a Integer number: ";
    std::cin >> num;
    
    std::cout << (pal.isPalindrome(num) ? "It's a palindrome" : "It's not a palindrome");

    return 0;
}
