// This function returns the preorder traversal of a binary tree
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;

    // Return an empty vector if the root node is NULL
    if (root == NULL) {
        return preorder;
    }

    // Create a stack to hold the nodes we need to visit
    stack<TreeNode*> st;

    // Push the root node onto the stack
    st.push(root);

    // While the stack is not empty, we have nodes to visit
    while(!st.empty()){
        // Pop the top node from the stack
        root = st.top();
        st.pop();

        // Add the value of the node to the preorder vector
        preorder.push_back(root->val);

        // If the node has a right child, push it onto the stack
        if(root->right != NULL){
            st.push(root->right);
        }

        // If the node has a left child, push it onto the stack
        if(root->left != NULL){
            st.push(root->left);
        }
    }

    // Return the preorder traversal
    return preorder;
}
