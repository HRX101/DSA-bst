/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 5
int front=-1,rear=-1,deque[N];
void enqueu_front(){
    int x;
    printf("\n enter your value in front");
    scanf("%d",&x);
    if(front==0 && rear==N-1){
        printf("\n full");
    }
    else if(front==-1 && rear==-1){
    front=rear=0;
    deque[front]=x;
    }
    else if(front==0){
        front=N-1;
        deque[front]=x;
    }
    else{
        front--;
        deque[front]=x;
    }
}
void enqueu_rear(){
    int x;
    printf("\n enter your value in rear");
    scanf("%d",&x);
    if(rear==N-1 && front==0){
        printf("\n full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1){
        rear=0;
        deque[rear]=x;
    }
    else{
        rear++;
        deque[rear]=x;
    }
}
void dequeue_front(){
    if(rear==-1 && front==-1){
        printf("\n already empty");
    }
    else if(rear==front){
        rear=front=-1;
    }
    else if(front==N-1){
        printf("\n the deleted item is %d",deque[front]);
        front=0;
    }
    else{
        printf("\n the deleted item is %d",deque[front]);
        front++;
    }
}
void dequeue_rear(){
        if(rear==-1 && front==-1){
        printf("\n already empty");
    }
    else if(rear==front){
        rear=front=-1;
    }
    else if(rear==0){
        printf("\n the deleted item is %d",deque[rear]);
    }
    else{
        printf("\n the deleted item is %d",deque[rear]);
        rear--;
    }
}
void display(){
    int i;
    i=front;
    while(i!=rear){
        printf("\n here values %d",deque[i]);
        i=(i+1)%N;
    }
     printf("\n here values %d",deque[i]);
}
int main()
{
   int i,j;
   printf("\n enter the choice");
   scanf("%d",&i);
   while(i!=0){
       printf("\n enter your value for do");
       scanf("%d",&j);
       switch(j){
           case 1:
           enqueu_front();
           break;
           case 2:
           enqueu_rear();
           break;
           case 3:
           display();
           break;
           case 4:
           dequeue_rear();
           break;
           case 5:
           dequeue_front();
           break;
       }
          printf("\n enter the choice");
   scanf("%d",&i);
   }

    return 0;
}
