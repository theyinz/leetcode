/**
 * Title: Longest Substring Without Repeating Characters
 * 
 * Input: "abcabcbb"
 * Output: 3 
 * Explanation: The answer is "abc", with the length of 3. 
 * 
 * Input: "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * Input: "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3. 
 *              Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> container;
        int highest = 0;
        for(int i = 0; i < s.size(); i++) {
            for(int j = 0; j < container.size(); j++) {
                if(container[j] == s[i]) {
                    container.erase(container.begin(), container.begin() + j + 1);
                    break;
                }
            }
            container.push_back(s[i]);
            int tempSize = container.size();
            if(tempSize > highest) {
                highest = tempSize;
            }
        }
        return highest;
    }
};