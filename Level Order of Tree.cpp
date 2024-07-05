#include <iostream>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void insert(TreeNode *&root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
    } else if (val < root->val) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}
void levelOrder(TreeNode *root) {
    if (root == nullptr) {
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; ++i) {
            TreeNode *node = q.front();
            q.pop();
            cout << node->val;
            if (i < levelSize - 1) {
                cout << " ";
            }
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        cout << endl;
    }
}
void deleteBST(TreeNode *&root) {
    if (root == nullptr) {
        return;
    }
    deleteBST(root->left);
    deleteBST(root->right);
    delete root;
    root = nullptr;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        TreeNode *root = nullptr;
        for (int i = 0; i < N; ++i) {
            int value;
            cin >> value;
            insert(root, value);
        }
        levelOrder(root);
        if (T > 0) {
            cout << endl;
        }
        deleteBST(root);
    }
    return 0;
}
