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
    
     void InitNode(TreeNode* node, int val)
    {
        node->val = val;
        node->left = NULL;
        node->right = NULL;
    }
    
    
    void InsertNode(TreeNode** root, TreeNode* newNode)
    {
        if (!*root)
            *root = newNode;
        
        else
        {
            if (newNode->val < (*root)->val)
                InsertNode(&(*root)->left, newNode);
            
            else if(newNode->val > (*root)->val)
                InsertNode(&(*root)->right, newNode);
            
            else
                delete newNode;
            
        }
    }


    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* new_node = new TreeNode;
        InitNode(new_node, val);
        InsertNode(&root, new_node);
        return root;
    }
};