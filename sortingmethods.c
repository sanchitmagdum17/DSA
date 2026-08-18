#include <stdio.h>

void accept(int arr[],int size)
{
    int i;
    printf("Enter the array elements:\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int size)
{
    int i;
    printf("Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void bubblesort(int arr[],int size)
{
    int i,j,temp;

    for (i=0;i<size-1;i++)
    {
        for (j=0;j<size-i-1;j++)
        {
            if (arr[j]>arr[j + 1])
            {
                temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionsort(int arr[],int size)
{
    int i,j,target,temp;

    for (i=0;i<size-1;i++)
    {
        target=i;

        for (j=i+1;j<size;j++)
        {
            if (arr[j]<arr[target])
            {
                target=j;
            }
        }

        temp=arr[target];
        arr[target]=arr[i];
        arr[i]=temp;
    }
}

void insertionsort(int arr[], int size)
{
    int i,j,target;

    for (i=1;i<size;i++)
    {
        target=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>target)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1] = target;
    }
}

int main()
{
    int choice,size;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    if (size<=0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    do
    {
        printf("\n===== MENU =====\n");
        printf("0. Exit\n");
        printf("1. Accept Array\n");
        printf("2. Display Array\n");
        printf("3. Bubble Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Insertion Sort\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 0:
                printf("Exiting...\n");
                break;

            case 1:
                accept(arr, size);
                break;

            case 2:
                display(arr, size);
                break;

            case 3:
                bubblesort(arr, size);
                printf("After Bubble Sort:\n");
                display(arr, size);
                break;

            case 4:
                selectionsort(arr, size);
                printf("After Selection Sort:\n");
                display(arr, size);
                break;

            case 5:
                insertionsort(arr, size);
                printf("After Insertion Sort:\n");
                display(arr, size);
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice!=0);

    return 0;
}
