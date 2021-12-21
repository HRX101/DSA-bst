/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void selection(int arr[],int n);//function declaration
void selection(int arr[],int n){//function defination 
    int j;
    for(j=1;j<n;j++){//o(n)
        int temp=arr[j];//take the next value 
        int i=j-1; //decrease the value from next value 
        while(i>=0 && temp<arr[i]){//checking wheather temp short or not and start the while loop
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=temp;
        
    }
}
int main()
{
    int arr[10],n,i;
    printf("\n enter the value ");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n the values after sorting \n");
    selection(arr,n);
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);

    return 0;
}
