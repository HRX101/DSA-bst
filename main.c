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
    struct node *l,*r;
};
struct node *create(int val){
    struct node *root=(struct node *)malloc(sizeof(struct node ));
    if(root==NULL){
        printf("\n overflow ");
        return root;
    }
    root->data=val;
    root->l=NULL;
    root->r=NULL;
    return root;
}
struct node *insert(struct node *root,int val){
    if(root==NULL){
        return create(val);
    }
    else if(val>root->data){
        root->r=insert(root->r,val);
    }
    else{
        root->l=insert(root->l,val);
    }
    return root;
}
struct node *search(struct node *root,int val){
    if(root==NULL || root->data==val){

        return root;
    }
    else if(val>root->data){
        
        return search(root->r,val);
    }
    else{
        return search(root->l,val);
    }
    
}
struct node *findmin(struct node *root){
    if(root==NULL){
        return root;
    }
    if(root->l!=NULL){
        return findmin(root->l);
    }
    return root;
}
struct node *delete(struct node *root,int val){
    if (root==NULL){
        return NULL;
    }
    if(val>root->data){
        root->r=delete(root->r,val);
    }
    if(val<root->data){
        root->l=delete(root->l,val);
        
    }
    else{
        if(root->l==NULL || root->r==NULL){
            struct node *temp;
            if(root->l==NULL){
                temp=root->r;
                
            }
            if(root->r==NULL){
                temp=root->l;
            }
            free(root);
            return temp;
        }
        else{
            struct node *temp=findmin(root);
            root->data=temp->data;
            root->r=delete(root->r,temp->data);
        }
    }
    return root;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->l);
    printf("\t%d",root->data);
    inorder(root->r);
}
int main()
{
    struct node *root=create(20);
    insert(root,10);
    insert(root,30);
     insert(root,11);
    insert(root,32);
     insert(root,18);
    insert(root,90);
    inorder(root);
    delete(root,10);
    printf("\n");
    inorder(root);
    search(root,10);
    

    return 0;
}
