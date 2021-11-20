/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define N 5
int front=-1;
int rear=-1,queue[N];
void enqueque(int x){
    if(rear==-1 && front==-1){
        rear=front=0;
        queue[rear]=x;
        
    }
    else if((rear+1)%N==front){
        printf("\n full queue");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue(){
    if(rear==-1 && front==-1){
        printf("\n queueu is empty");
    }
    else if(rear==front){
        rear=front=-1;
        
    }
    else{
        printf("\n the dequeue element is %d",queue[front]);
        front=(front+1)%N;
    }
}
void display(){
    int i=front;
    if(rear==-1 && front==-1){
        printf("\n queueu is empty");
    }
    else{
        printf("\n here is queue");
        while(i!=rear){
            printf("\n %d",queue[i]);
            i=(i+1)%N;
        }
    }
}
int main()
{
   int i,j,x;
   printf("\n enter your choice");
   scanf("%d",&i);
   while(i!=0){
    printf("\n enter your choice");
   scanf("%d",&j);
   switch(j){
       case 1:
       printf("\n enter your value");
       scanf("%d",&x);
       enqueque(x);
       break;
       case 2:
       dequeue();
       break;
       case 3:
       display();
       break;
   }
      printf("\n enter your choice");
   scanf("%d",&i);
   }

    return 0;
}
