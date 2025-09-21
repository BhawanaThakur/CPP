#include<stdio.h>
int strlen(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    printf("Length of the string is: %d\n", length);
    return 0;
}
