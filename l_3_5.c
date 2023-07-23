#include<stdio.h>
int main()
{
    int n;
    printf("Enter Numbers:\n");
    scanf("%d",&n);
    if(n>0)
        printf("%d positive number",n);
    else if(n<0)
    printf("%d negative number",n);
    else
        printf("zero");

}
