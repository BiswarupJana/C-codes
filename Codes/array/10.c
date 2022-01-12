#include <stdio.h>
int main()
{
    int marks[50], i,n;
    int group[10]={0};
    printf("\n Enter the number of students: \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\n marks[%d]= ",i);
        scanf("%d",&marks[i]);
        ++group[(int)(marks[i])/n];

        // int flooredValue = (int)value[i];   //e.g. 3.5 becomes 3; 12.6 becomes 12
        // int groupIndex = flooredValue / 10; //division discarding the remainder
        // group[groupIndex] += 1;
    }

    printf("\n *************");
    printf("\n GROUP \t\t FREQUENCY");
    for(i=0; i<n; i++)
    {
        printf("\n %d \t\t %d",i,group[i]);
    }
    return 0;
}