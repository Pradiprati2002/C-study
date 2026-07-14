#include<stdio.h>
void readTemp(int temp[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("enter temperature for day %d: ", i+1);
        scanf("%d", &temp[i]);
    }
}

int FindMaxtemp(int temp[], int size)
{
     int max = temp[0];
      for(int i=0; i<size; i++)
      {
        if (temp[i] > max)
        {
            max = temp[i];
        }
      }
      return max;
}

int main()
{
    int temp[10];
    int size = 10;
    readTemp(temp, size);
    printf("Maximum temperature is %d\n", FindMaxtemp(temp, size));
    return 0;
}

