#include <stdio.h>

void main() {
    int k,i,size,temp,j;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in the array:\n");

    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Sorting Array with selection sort!\n");
    for (i=0;i<size-1;i++) {
        for (j=i+1;j<size;j++) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("The sorted array is:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}