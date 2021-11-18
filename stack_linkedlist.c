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
    struct node *link;
};
struct node *top=0,*new_link;
void push(int x){
    struct ndoe *temp;
    new_link=(struct node *)malloc(sizeof(struct node));
    new_link->data=x;
    new_link->link=top;
    top=new_link;
}
void pop(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("\n no node");
    }
    else{
        printf("\n the poped value is %d",temp->data);
        top=top->link;
        free(temp);
    }
}
void display(){
    struct node *temp;
    temp=top;
    printf("\n values ");
    while(temp!=NULL){
        printf("\t%d",temp->data);
        temp=temp->link;
    }
}
int main()
{
        int i,j,x;
    printf("\n here value");
    scanf("%d",&i);
    while(i!=0){
        printf("\n enter choice");
        scanf("%d",&j);
        switch(j){
            case 1:
            printf("\n enter the value you want to push");
            scanf("%d",&x);
            push(x);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("\n wrong");
            break;
        }
    printf("\n here value");
    scanf("%d",&i);
    }


    return 0;
}
