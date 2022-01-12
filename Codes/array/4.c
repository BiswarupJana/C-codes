#include <stdio.h>
int main()
{
    int i, j, arr[20],large = -99999;
    printf("\n Enter the number of elements:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=1;j<=i;j++)
    {
        if(arr[j]>large)
        large=arr[j];
    }
    printf("Large Number is %d",large);
    return 0;
}