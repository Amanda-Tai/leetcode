class Solution {
public:
    char findTheDifference(string s, string t) {
        int num_s = 0, num_t = 0;
        for (char c : s) num_s += static_cast<int>(c);
        for (char c : t) num_t += static_cast<int>(c);
        int ans_i = abs(num_s - num_t);
        char ans_c = static_cast<char>(ans_i);

        return ans_c;
    }
};
