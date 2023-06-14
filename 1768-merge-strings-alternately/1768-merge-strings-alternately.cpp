class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i, j = 0;
        string res = "";

        while (i < word1.size() && j < word2.size()) {
            res += word1[i];
            res += word2[i];
            i = i + 1;
            j = j + 1;
        }

        res = res + word1.substr(i, word1.size());
        res = res + word2.substr(j, word2.size());

        return res;
    }
};