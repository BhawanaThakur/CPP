#include<stdio.h>
int main()
{
    int ar[5]={ 9,6,5,4,2};
    int *ptr;
    ptr=&ar[4];
    for(int i=0;i<5;i++)
   {
    printf("%d",*ptr);
    ptr--;
}
return 0;
}