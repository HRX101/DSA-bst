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
int pos;
void createnode(){
    struct node *temp;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter the value of list ");
    scanf("%d",&new_node->data);
    
    if(head==NULL){
        head=temp=new_node;
    }
    else{
            temp->next=new_node;
            temp=new_node;
            
            
    }
    temp->next=head;
    
    
    
}
void display(){
    struct node *temp;
    temp=head;
    while(temp->next!=head){
        printf("\n here the value is %d",temp->data);
        temp=temp->next;
    }

    printf("\n here the value is %d",temp->data);
    
}
int main()
{
    int i,j;
    printf("\n enter the value");
    scanf("%d",&i);
    while(i!=0){
        printf("\n entet choice");
        scanf("%d",&j);
        switch(j){
            case 1:
            createnode();
            break;
            case 2:
            display();
            break;
            default:
            printf("\n");
            break;
            
        }
    printf("\n enter the value");
    scanf("%d",&i);
    }

    return 0;
}
