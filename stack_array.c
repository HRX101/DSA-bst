/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 5
int top=-1,item;
int stack[N];
void push(){
    int x;
    printf("\n enter your value ");
    scanf("%d",&x);
    if(top==N-1){
        printf("\n overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("\n underflow");
    }
    else{
        item=stack[top];
        top--;
    }
    printf("\n the pop item is %d",item);
}
void peek(){
    if(top==-1){
        printf("\n underflow");
    }
    else{
        printf("\n the peek value is %d",stack[top]);
    }
}
void display(){
    int i;
    if(top==-1){
        printf("\n underflow");
    }
    for(i=top;i>=0;i--){
        printf("\t %d",stack[i]);
    }
}
int main()
{
    int i,j;
    printf("\n here value");
    scanf("%d",&i);
    while(i!=0){
        printf("\n enter choice");
        scanf("%d",&j);
        switch(j){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            peek();
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
