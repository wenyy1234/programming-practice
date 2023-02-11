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
{}

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
{}

void PreOrderTraverseNonRecurssive(BinaryTree *root)
{}

void InOrderTraverseNonRecurssive(BinaryTree *root)
{
}

void PostOrderTraverseNonRecurssive(BinaryTree *root)
{}
