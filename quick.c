/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    int j;
    for(j=start;j<end;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=temp;
    return (i+1);
}
void quick(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        quick(arr,start,p-1);
        quick(arr,p+1,end);
    }
}
int main()
{
    int arr[10],n,i;
    printf("\n enter your limit ");
    scanf("%d",&n);
    printf("\n enter array value ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quick(arr,0,n);
    printf("\n after sorting");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}
