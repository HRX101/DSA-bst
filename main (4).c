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
    struct node*prev;
    struct node *next;
};
struct node *head,*tail, *new_node;
int pos;
void createlist(){
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter your value");
    scanf("%d",&new_node->data);
    new_node->prev=0;
    new_node->next=0;
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        tail->next=new_node;
        new_node->prev=tail;
        tail=tail->next;
    }
}
void beg()
{
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter data for beg");
    scanf("%d",&new_node->data);
    if(head!=NULL){
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
        
        
    }
    else{
        head=tail=new_node;
    }
}
void last(){
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter the value you want to store at last");
    scanf("%d",&new_node->data);
    if(head!=NULL){
        tail->next=new_node;
        new_node->prev=tail;
        tail=tail->next;
    }
}
void random1(){
    struct node *temp,*temp1;
    temp=head;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter value");
    scanf("%d",&new_node->data);
    printf("\n enter the pos");
    scanf("%d",&pos);
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
        
    }
    temp1=temp->next;
    temp1->prev=new_node;
    new_node->next=temp->next;
    new_node->prev=temp;
    temp->next=new_node;
    
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("\n here the values are %d",temp->data);
        temp=temp->next;
    }
}
void beg_del(){
    struct node *temp;
    temp=head;
    if(head!=NULL){
    head=head->next;
    free(temp);
    }
}
void last_del(){
    struct node *temp;
    
}
int main()

{
    int i,j;
    printf("\n enter your choice ");
    scanf("%d",&i);
    while(i!=0){
        printf("\n enter your choices ");
        scanf("%d",&j);
        switch(j){
            case 1:
            createlist();
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
            random1();
            break;
            case 6:
            beg_del();
            break;
            default:
            printf("\n wrong");
            break;
    }
    printf("\n enter your choice ");
    scanf("%d",&i);
    }
    return 0;
}
