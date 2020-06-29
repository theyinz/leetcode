/**
 * Title: Longest Palindromic Substring
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * Input: "cbbd"
 * Output: "bb"
 */
class Solution {
public:
    bool stringTable[1010][1010];
    string longestPalindrome(string s) {
        int maxLength = 1;
        int start = 0;
        string answer = "";
        int size = s.size();
        for(int i = 0; i < size; i++) {
            stringTable[i][i] = true;
        }
        for(int i = 0; i < size - 1; i++) {
            if(s[i] == s[i+1]) {
                stringTable[i][i+1] = true;
                if(maxLength < 2) {
                    start = i;
                    maxLength = 2;
                }
            }
        }
        for(int i = 3; i < size + 1; i++) {
            for(int j = 0; j < size - (i - 1); j++) {
                if(s[j] == s[j+(i-1)]) {
                    if(stringTable[j][j+(i-1)] = stringTable[j+1][j+(i-2)]) {
                        if(maxLength < i) {
                            maxLength = i;
                            start = j;
                            cout << j << endl;
                        }
                    }
                }
            }
        }
        return s.substr(start, maxLength);
    }
};