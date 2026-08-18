#include<stdio.h>
void bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        
        }
    }
    printf("Sorted array: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
}
int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n"); 
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Array before sorting: ");  
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    bubblesort(arr,n);
}