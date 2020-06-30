/**
 * Title: Group Anagrams
 * 
 * Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
 * Output:
 * [
 *   ["ate","eat","tea"],
 *   ["nat","tan"],
 *   ["bat"]
 * ]
 */
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> hash;
        for (auto str: strs) {
            string key = str;
            sort(key.begin(), key.end());
            if (!hash.count(key)) {
                vector<string> vec;
                vec.push_back(str);
                hash[key] = vec;
            } else {
                hash[key].push_back(str);
            }
        }
        vector<vector<string>> result;
        for (auto p: hash) {
            result.push_back(p.second);
        }
        return result;
    }
};