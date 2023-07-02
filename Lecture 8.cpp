#include <bits/stdc++.h>
using namespace std;

// struct Node  
// { 
//   int key; 
//   struct Node *left; 
//   struct Node *right; 
//   Node(int k){
//       key=k;
//       left=right=NULL;
//   }
// };

// int res=0;
// int height(Node *root){
//     if(root==NULL)
//         return 0;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     res=max(res,1+lh+rh);
    
//         return 1+max(lh,rh);
// }

// // efficient approach
// int diameter(TreeNode *root,int *height){
//     if(root==NULL){
//         *height=0;
//         return 0;
//     }
//     int lh=0,rh=0,ld=0,rd=0;
//     ld =diameter(root->left,&lh); // adding one to include the root
//     rd =diameter(root->right,&rh);

//     *height=max(lh,rh)+1;
//     return max(lh,rh+1,max(ld,rd));
// }

//vertical order of given binary tree

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

map<int,map<int,multiset<int>>>m;
vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>>a;
    if(!root)return a;
    queue<pair<TreeNode*,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(q.size()){
        auto x = q.front();
        TreeNode* node=x.first;
        q.pop();
        int val = x.first->val;
        int v=x.second.first,l=x.second.second;
        m[v][l].insert(val);
        if(node->left){
            q.push({node->left,{v-1,l+1}});
        }
        if(node->right){
            q.push({node->right,{v+1,l+1}});
        }
    }
    for(auto i : m){
        vector<int>v;
        for(auto j:i.second){
            for(auto g : j.second)
            v.push_back(g);
        }
        a.push_back(v);
    }
    return a;
}

int main() {
    
    return 0;
}