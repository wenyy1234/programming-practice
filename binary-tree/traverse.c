#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 128

/* 2023/02/11 */
typedef struct binaryTree {
    int val;
    struct binary *left;
    struct binary *right;
} BinaryTree;

typedef struct stack {
    int values[STACK_SIZE];
    int top;
} Stack;


void PreOrderTraverseRecurssive(BinaryTree *root)
{
    if (root == NULL) {
        return;
    }
    printf("%d ", root->val);
    PreOrderTraverseRecurssive(root->left);
    PreOrderTraverseRecurssive(root->right);
    return;
}

void InOrderTraverseRecurssive(BinaryTree *root)
{
    if (root == NULL) {
        return;
    }
    InOrderTraverseNonRecurssive(root->left);
    printf("%d ", root->val);
    InOrderTraverseNonRecurssive(root->right);
    return;
}

void PostOrderTraverseRecurssive(BinaryTree *root)
{
    if (root == NULL) {
        return;
    }
    PostOrderTraverseRecurssive(root->left);
    PostOrderTraverseRecurssive(root->right);
    printf("%d ", root->val);
    return;
}
        
void PreOrderTraverseNonRecurssive(BinaryTree *root)
{
    if (root == NULL) {
        return；
    }
    Stack s = {0};
    s.values[s.top++] = root->val;
    while (s.top > 0) {
        printf("%d ", s.values[--s.top]);
        if (root->left) {
            s.values[s.top++] = root->left->val;
        }
        if (root->right) {
            s.values[s.top++] = root->right->val;
        }
    }
    return;
}

void InOrderTraverseNonRecurssive(BinaryTree *root)
{
}

void PostOrderTraverseNonRecurssive(BinaryTree *root)
{}
