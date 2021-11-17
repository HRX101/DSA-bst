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
    struct node *next;
};
struct node *head,*new_node;
void create(){
    struct node *temp;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d",&new_node->data);
    if(head==NULL){
         head=temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=temp->next;
    }
}
void beg(){
    struct node *temp;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter data");
    scanf("%d",&new_node->data);
    if(head!=NULL){
        new_node->next=head;
        head=new_node;
    }
}
void last(){
    struct node *temp;
    new_node=(struct node *)malloc(sizeof(struct node));
    temp=head;
    printf("\n enter data");
    scanf("%d",&new_node->data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void revers(){
    struct node *temp,*current,*prev;
    prev=0;
    temp=current=head;
    while(current!=0){
    temp=temp->next;
    current->next=prev;
    prev=current;
    current=temp;
    }    
    head=prev;
    
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("\n here value %d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i,j;
    printf("\n enter choice");
    scanf("%d",&i);
    while(i!=0){
        printf("\n enter choices ");
        scanf("%d",&j);
        switch(j){
            case 1:
            create();
            break;
            case 2:
            beg();
            break;
            case 3:
            last();
            break;
            case 4:
            display();
            break;
            case 5:
            revers();
            break;
            default:
            printf("\n erong");
            break;
        }
            printf("\n enter choice again");
    scanf("%d",&i);
        
    }
    return 0;
}
