#include <stdio.h>

int FindLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i<size; i++)
    {
         if (arr[i] > largest)
         {
                largest = arr[i];
         }
    return largest;
    }
}

int main()
{
    int arr[5];
    int size = 5;
    printf("Enter five numbers :");
    for(int i=0; i<size; i++)
    { 
        scanf("%d", &arr[i]);
    }
    int Findlargest(int arr[],int size);
    printf("Largest number is ; %d ", FindLargest(arr,size));
}
