//inorder in bst....

// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if(newNode == NULL){
//         printf("Memory allocation failed!");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// void inorderTraversal(struct Node* root) {
//     if(root == NULL)
//         return;

//     inorderTraversal(root->left);
//     printf("%d ", root->data);
//     inorderTraversal(root->right);
// }

// int main() {
//     struct Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);

//     printf("Inorder traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     return 0;
// }



// insertion in bst....
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int key) {
    if (root == NULL)
        return createNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}

void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->key);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of the BST: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}

