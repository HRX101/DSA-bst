/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }
}
void heap(int arr[],int n){
    int i;
    for(i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[10],n,i;
    printf("\n enter size ");
    scanf("%d",&n);
    printf("\n enter array values ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heap(arr,n);
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}
