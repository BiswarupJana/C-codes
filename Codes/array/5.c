#include<stdio.h>
int main()
{
    int i,j,arr[20],smallest=99999, pos=-1;
    printf("Enter the no of elements:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=1;j<=i;j++)
    {
        if(smallest>arr[j])
        {
        smallest = arr[j];
        pos = j;

        }
    }
    printf("\n Smallest of all numbers is %d",smallest);
    printf("\n Position of smallest number is %d",pos);
    return 0;

}