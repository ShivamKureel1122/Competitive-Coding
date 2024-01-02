Problem - https://leetcode.com/problems/range-sum-of-bst/
------------------------------------------------------------
class Solution {
public:
    int sum = 0;
    void calculateSum(TreeNode* root, int low, int high) {
        if(root != nullptr) {
            calculateSum(root->left, low, high);
            if(root->val >= low && root->val <= high)  sum += root->val;
            calculateSum(root->right, low, high);
        } 
    } 
    int rangeSumBST(TreeNode* root, int low, int high) {
        calculateSum(root, low, high);
        return sum;
    }
};
