/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;
void insertion(int arr[]);
void print(int arr[]);
void insertion(int arr[]){
    int i,temp,j;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
void print(int arr[]){
    int i;
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}
int main()
{
    printf("\n the array limit value ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n before sorting ");
    print(arr);
    insertion(arr);
    printf("\n after sorting :");
    print(arr);

    return 0;
}
