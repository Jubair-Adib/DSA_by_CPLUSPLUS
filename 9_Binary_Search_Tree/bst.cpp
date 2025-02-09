#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// BST class
class BST {
private:
    Node* root;

    // Helper function for insertion
    void insert(Node*& node, int value) {
        if (node == nullptr) {
            node = new Node(value);
            return;
        }
        if (value < node->data)
            insert(node->left, value);
        else if (value > node->data)
            insert(node->right, value);
    }

    // Helper function for searching
    bool search(Node* node, int value) {
        if (node == nullptr)
            return false;
        if (node->data == value)
            return true;
        else if (value < node->data)
            return search(node->left, value);
        else
            return search(node->right, value);
    }

    // Helper function for deletion
    void deleteNode(Node*& node, int value) {
        if (node == nullptr)
            return;

        if (value < node->data)
            deleteNode(node->left, value);
        else if (value > node->data)
            deleteNode(node->right, value);
        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                node = temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                node = temp;
            } else {
                Node* temp = minValueNode(node->right);
                node->data = temp->data;
                deleteNode(node->right, temp->data);
            }
        }
    }

    // Helper function to find the minimum value node
    Node* minValueNode(Node* node) {
        while (node && node->left != nullptr)
            node = node->left;
        return node;
    }

    // Traversal functions
    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void preOrder(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void postOrder(Node* node) {
        if (node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->data << " ";
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int value) {
        insert(root, value);
    }

    void deleteNode(int value) {
        deleteNode(root, value);
    }

    void search(int value) {
        if (search(root, value))
            cout << value << " is found in the BST." << endl;
        else
            cout << value << " is not found in the BST." << endl;
    }

    void inOrder() {
        cout << "In-order Traversal: ";
        inOrder(root);
        cout << endl;
    }

    void preOrder() {
        cout << "Pre-order Traversal: ";
        preOrder(root);
        cout << endl;
    }

    void postOrder() {
        cout << "Post-order Traversal: ";
        postOrder(root);
        cout << endl;
    }
};

// Main function to demonstrate BST operations
int main() {
    BST tree;

    // Insert nodes
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Traverse the tree
    tree.inOrder();
    tree.preOrder();
    tree.postOrder();

    // Search for a value
    tree.search(40);
    tree.search(90);

    // Delete a node
    tree.deleteNode(50);
    tree.inOrder();

    return 0;
}
