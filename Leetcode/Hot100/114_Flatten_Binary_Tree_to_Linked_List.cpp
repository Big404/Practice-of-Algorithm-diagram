/*
Given a binary tree, flatten it to a linked list in-place.

For example, given the following tree:
    1
   / \
  2   5
 / \   \
3   4   6
The flattened tree should look like:
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
*/

#include <iostream>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void flatten(TreeNode* root) {
        dfs(root);
    }

    TreeNode *dfs(TreeNode *root) {
        if (!root) return root;
        TreeNode *right = root->right;
        root->right = dfs(root->left);
        root->left = NULL;
        TreeNode* curr = root;
        while(curr->right) curr = curr->right;
        curr->right = dfs(right);
        return root;
    }
};