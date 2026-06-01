class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        string sign = "";

        if (num < 0) {
            sign = "-";
            num = -num;
        }

        string ans;

        while (num > 0) {
            ans += to_string(num % 7);
            num /= 7;
        }

        reverse(ans.begin(), ans.end());
        return sign + ans;
    }
};
