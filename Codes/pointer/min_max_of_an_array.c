#include<stdio.h>
void minmax(int arr[], int len, int *min, int *max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
        }
        if(arr[i]<*min)
        {
            *min=arr[i];
        }
    }
}
int main()
{
    int i,j, a[20],min,max;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    for(j=0; j<i; j++){
        printf("\nElement[%d]",j+1);
        scanf("%d",&a[j]);
    }
    minmax(a,i,&min,&max);
    printf("\n minimum value of the array is %d and maximum value of the array is %d",min,max);
    return 0;

}