#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int d) {
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = d;
}
struct node *insert(struct node *root,int d){
    if(root == NULL) {
        return createnode(d);
    }
    else if(d<root->data){
        root->left = insert(root->left,d);
    }
    else if(d>root->data){
        root->right = insert(root->right,d);
    }
    return root;
}
void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root) {
    if(root != NULL){
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}
int main() {
    struct node *root = NULL;
    root = insert(root,50);
    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,90);
    printf("Inorder traversal:\n");
    inorder(root);
    printf("preorder traversal:\n");
    preorder(root);
    printf("postorder traversal:\n");
    postorder(root);
}
