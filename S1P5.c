#include<stdio.h>
int max(int*a,int*b,int*c){
    if(*a>*b && *a>*c)
    return *a;
    else if(*b>*a && *b>*c)
    return *b;
    else
    return*c;
}
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int m=max(&a,&b,&c);
    printf("The largest number is %d",m);
return 0;
}
