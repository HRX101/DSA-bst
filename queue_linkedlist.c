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
struct node *rear=0,*front=0;
void enqueu(){
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("\n enter your value ");
    scanf("%d",&new_node->data);
    new_node->next=0;
    if(rear==0 && front==0){
        rear=front=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }
    
}
void dsiplay(){
    struct node *temp;
    temp=front;
    if(rear==0 && front==0){
        printf("\n empty");
    }
    else{
        printf("\n values you entered");
        while(temp!=NULL){
            printf("\t%d",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(rear==0 && front==0){
        printf("\n empty");
    }
    else{
        printf("\n deleted element is %d",temp->data);
        front=front->next;
        free(temp);
    }
    
}
int main()
{
    int i,j;
    printf("\n enter 0for end and other for continue");
    scanf("%d",&i);
    while(i!=0){
        printf("\n enter your choice ");
        scanf("%d",&j);
        switch(j){
            case 1:
            enqueu();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            dsiplay();
            break;
        }
     printf("\n enter 0for end and other for continue");
    scanf("%d",&i);
    }

    return 0;
}
