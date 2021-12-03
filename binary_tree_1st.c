/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *create(){
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("\n enter values");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    new_node->data=x;
    printf("\n left node created");
    new_node->left=create();
    printf("\n right node created");
    new_node->right=create();
    return new_node;
}
void preorder(struct node *root){
    if(root==NULL){
        return;
    }
    printf(" %d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    printf(" %d",root->data);
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    printf(" %d",root->data);
    preorder(root->right);

}
int main()
{
    struct node *root;
    root=create();
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    

    return 0;
}
