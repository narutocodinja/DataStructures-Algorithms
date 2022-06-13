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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        
        if(root == nullptr) return result;
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty()){
            double avg = 0, count = 0;
            int s = q.size();
            for(int i = 0; i < s; i++){
                TreeNode *node = q.front();
                q.pop();
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                avg += node->val;
                count++;
            }
            avg /= count;
            result.push_back(avg);
        }
        return result;
    }
};
