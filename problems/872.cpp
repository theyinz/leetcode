/**
 * Title: Leaf-Similar Trees
 * 
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* curr, vector<int> &seq) {
        if(curr == NULL) return;
        if(curr->left == NULL && curr->right == NULL) {
            seq.push_back(curr->val);
        } else {
            dfs(curr->left, seq);
            dfs(curr->right, seq);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1; 
        vector<int> seq2;
        dfs(root1, seq1);
        dfs(root2, seq2);
        if(seq1.size() != seq2.size()) return false;
        for(int i = 0; i < seq1.size(); i++) {
            if(seq1[i] != seq2[i]) return false;
        }
        return true;
    }
};