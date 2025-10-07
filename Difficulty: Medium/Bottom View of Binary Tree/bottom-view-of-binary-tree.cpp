/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
         map<int,int> mp;
        
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty()){
            
            auto node = q.front();q.pop();
            
            mp[node.second] = node.first->data;
            
            Node* n = node.first;
            
            if(n->left){
                q.push({n->left,node.second-1});
            }
            if(n->right){
                q.push({n->right,node.second+1});
            }
        }
        
        vector<int> res;
        res.reserve(mp.size());
        
        for(auto it=mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        
        return res;
        
    }
};