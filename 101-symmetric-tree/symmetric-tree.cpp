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

       bool check(TreeNode* leftTree, TreeNode* rightTree) {
        if(leftTree==NULL and rightTree==NULL){
            return true;
        } 
        if(leftTree==NULL or rightTree==NULL){
            return false;
        }
        if(leftTree->val!=rightTree->val){
            return false;
        }

        bool r1 = check(leftTree->left, rightTree->right);
        bool r2 = check(leftTree->right, rightTree->left);
        if(r1==true and r2==true){
            return true;
        }
        return false;
       }
       bool isSymmetric(TreeNode* root){
        if(root==NULL){
            return true;
        }

        return check(root->left,root->right) ;
      }
    
};