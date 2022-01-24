#include<stdio.h>
int main()
{
    int i=5;
    int *p;
    p=&i;
    printf("\n %d\t %d\n",*p,p);
    return 0;
}