/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;
void bubble(int arr[]){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
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
    bubble(arr);
    printf("\n after sorting :");
    print(arr);

    return 0;
}
