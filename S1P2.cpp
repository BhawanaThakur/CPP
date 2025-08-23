#include<stdio.h>
void swapbyvalue(int a,int b){
int temp=a;
a=b;
b=temp;
printf("Swap by value:a=%d,b=%d\n,a,b");
}
void swapbyreference(int*a,int*b){
    int *temp=*a;
    *a=*b;
    *b=*temp;
printf("Swap by value:a=%d,b=%d\n,*a,*b")
}