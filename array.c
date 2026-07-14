#include <stdio.h>

void printArray(int arr[], int size) 
{
    for (int i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[5];
    int size=5;
    for(int i=0; i<size; i++)
    {
        printf("Enter Element %d*",i+1);
        scanf("%d", &arr[i]);
    }
    printArray(arr,size);
    return 0;
}