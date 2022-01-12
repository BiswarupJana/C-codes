#include <stdio.h>
int main()
{
    int array1[100],array2[100],i,m,n;
    printf("\nEnter the No of elements in First array:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\nEnter the No of elements in second array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }
    for(i=0;i<n;i++)
    {
        array1[m+i]=array2[i];
    }
    printf("Merged array is: ");
    for(i=0;i<m+n;i++)
    {
        printf(" %d",array1[i]);
    }
    return 0;
}