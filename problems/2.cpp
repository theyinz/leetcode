/**
 * Title: Add Two Numbers
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int calculateNumber(ListNode* curr, ListNode* curr2) {
        int num1 = 0;
        int num2 = 0;
        if(curr != NULL) {
            num1 = curr->val;
        }
        if(curr2 != NULL) {
            num2 = curr2->val;
        }
        return num1 + num2;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = NULL;
        ListNode* curr = l1;
        ListNode* curr2 = l2;
        ListNode* iterator = NULL;
        int old = 0;
        while(curr != NULL || curr2 != NULL) {
            if(root == NULL) {
                int tempNum = calculateNumber(curr, curr2);
                if(tempNum >= 10) {
                    tempNum-=10;
                    old++;
                }
                root = new ListNode(tempNum);
                iterator = root;
            } else {
                int tempNum = calculateNumber(curr, curr2) + old;
                old = 0;
                if(tempNum >= 10) {
                    tempNum-=10;
                    old++;
                }
                ListNode* temp = new ListNode(tempNum);
                iterator->next = temp;
                iterator = iterator->next;
            }
            if(curr != NULL) {
                curr = curr->next;
            }
            if(curr2 != NULL) {
                curr2 = curr2->next;
            }
        }
        if(old > 0) {
            ListNode* temp = new ListNode(old);
            iterator->next = temp;
        }
        return root;
    }
};