#include <iostream>
#include <limits>

class Solution {
public:
    int reverse(int x) {
        if (x <= std::numeric_limits<int32_t>::min() || x >= std::numeric_limits<int32_t>::max()) {
            return 0;
        }
        else if (x == std::numeric_limits<int32_t>::min()) {
            return 0; 
        } else {
            int y = x;
            x = std::abs(x);
            int num = 0;
            while (x) {
                int rem = x % 10;
                x /= 10;
                if (num > (std::numeric_limits<int32_t>::max() - rem) / 10) {
        return 0; 
    }
                num = num * 10 + rem;
            } x = num;
            
            if (y < 0) {
                x *= -1;
            }
            
            return x;
        }
    }
};

int main() {
    Solution rev;
    int num;
    
    std::cout << "Enter a 32bit Integer number: ";
    std::cin >> num;
    
    std::cout << (rev.reverse(num) == 0 ? std::string("It's a problem to fetching 64bit.") : std::to_string(rev.reverse(num)));

    return 0;
}
