/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* node, bool &ifbalance){
        if(node == nullptr){
            return 0;
        }
        int leftHeight= height(node->left, ifbalance);
        int rightHeight= height(node->right, ifbalance);

        if(abs(leftHeight-rightHeight)>1){
            ifbalance= false;
        }
        return(1+max(leftHeight, rightHeight));
    }
    bool isBalanced(TreeNode* root) {
        bool ifbalance= true;
        height(root, ifbalance);
        return ifbalance;
    }
};