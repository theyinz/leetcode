/**
 * Title: Populating Next Right Pointers in Each Node
 * 
 * Input: root = [1,2,3,4,5,6,7]
 * Output: [1,#,2,3,#,4,5,6,7,#]
 * Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    void con(Node* curr) {
        if(curr == NULL) return;
        con(curr->left);
        con(curr->right);
        Node* leftTemp = curr->left;
        Node* rightTemp = curr->right;
        while(leftTemp != NULL) {
            leftTemp->next = rightTemp;
            leftTemp = leftTemp->right;
            rightTemp = rightTemp->left;
        }
    }
    Node* connect(Node* root) {
        con(root);
        return root;
    }
};