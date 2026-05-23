class Solution {
  public:

    int solve(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = solve(root->left);
        int right = solve(root->right);

        int old = root->data;

        root->data = left + right;

        return old + left + right;
    }

    void toSumTree(Node *node)
    {
        solve(node);
    }
};