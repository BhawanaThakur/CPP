#include<stdio.h>
int main(){
    char *names[5]={
        "Bob",
        "Alice",
        "Eve",
        "Charlie",
        "David"
    };
    printf("The names are:\n");
    for(int i=1;i<=5;i++){
        printf("%s\n",*names[i]);
    }
    return 0;
}
    