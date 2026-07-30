#include<stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter the positive integer :");
    scanf("%d", &n);
     while(i<=n)
     {
        sum = sum +i;
        i = i+1;
     
     }
     printf("Result*%d", sum);
     return 0;
}