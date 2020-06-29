/**
 * Title: Binary Tree Right Side View
 * 
 * Input: [1,2,3,null,5,null,4]
 * Output: [1, 3, 4]
 * Explanation:
 * 
 *    1            <---
 *  /   \
 * 2     3         <---
 *  \     \
 *   5     4       <---
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    map<int, int> result;
public:
    vector<int> rightSideView(TreeNode* root) {
        getResult(root, 1);
        vector<int> returned;
        for (auto p: result) {
            returned.push_back(p.second);
        }
        return returned;
    }
    
    void getResult(TreeNode* node, int level) {
        if (node != NULL) {
            result[level] = node->val;
            getResult(node->left, level+1);
            getResult(node->right, level+1);
        }
    }
};