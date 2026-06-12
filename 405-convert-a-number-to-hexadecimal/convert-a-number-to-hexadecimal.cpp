class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string hexChars = "0123456789abcdef";
        unsigned int n = num;   // handles negative numbers using 32-bit two's complement
        string ans;

        while (n > 0) {
            ans = hexChars[n % 16] + ans;
            n /= 16;
        }

        return ans;
    }
};