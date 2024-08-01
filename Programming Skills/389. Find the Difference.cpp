class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n_min = min(word1.size(), word2.size());
        for(int i = 0; i < n_min; ++i) {
            ans += word1[i];
            ans += word2[i];
        }

        return ans + word1.substr(n_min) + word2.substr(n_min);
    }
};
