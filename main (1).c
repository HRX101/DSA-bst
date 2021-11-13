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
struct node *head,*new1;
int pos,search;

void ins(){
    new1=(struct node *)malloc(sizeof(struct node));

    printf("\n enter your data");
    scanf("%d",&new1->data);
    new1->next=head;
    head=new1;
}

void insert(){
    struct node *temp;
    temp=head;
    new1=(struct node *)malloc(sizeof(struct node));
    printf("\n enter your data");
    scanf("%d",&new1->data);
   
    
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
    

    temp->next=new1;
    
    
    
    
}
void ran(){
    struct node *temp;
    temp=head;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("\n enter your pos ");
    scanf("%d",&pos);
    printf("\n enter your data also");
    scanf("%d",&new1->data);
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    new1->next=temp->next;
    temp->next=new1;
    
}
void search1(){
    struct node *temp;
    temp=head;
    printf("\n enter you se");
    scanf("%d",&search);
    int i=1;
    if(temp->data==search){
        printf("\n it find at %d pos",i);
    }
    else{
        while(temp!=NULL){
            temp=temp->next;
            i++;
            if(temp->data==search){
                printf("\n it find at %d pos",i);
                break;
                
            }
        }
    }
}
void show(){
   struct node *temp;
   temp=head;
    while(temp!=NULL){
        printf("\t here the values %d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i,j;
    printf("\n");
    scanf("%d",&i);
    
    while(i!=0){
        printf("\n enter your");
        scanf("%d",&j);
        switch(j){
            case 1:
            ins();
            break;
            case 2:
            show();
            break;
            case 3:
            insert();
            break;
            case 4:
            ran();
            break;
            case 5:
            search1();
            break;
            default:
            printf("\n end");
            break;
        }
        scanf("%d",&i);
    }

    return 0;
}
