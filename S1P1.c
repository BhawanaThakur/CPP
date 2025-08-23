#include<stdio.h>
int main(){
    int num=25;
    int*ptr:
    ptr*=&num;
    printf("value of num=%d\n",*ptr)
    printf("Address of num=%p\n",(void*)ptr);
    return 0;
}