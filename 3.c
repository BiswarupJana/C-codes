#include <stdio.h>

int main()
{
    int i,j, arr[20],sum;
    float mean =0.0;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    for(j=0; j<i; j++){
        printf("Element[%d]",j+1);
        scanf("%d",&arr[j]);
    }
    for(j=0; j<i; j++){
        sum =sum + arr[j];
        mean = sum/i;
        
    }
        printf("\nSum of the array elements= %d",sum);
        printf("\nmean of the array elements= %f",mean);
    return 0;
}