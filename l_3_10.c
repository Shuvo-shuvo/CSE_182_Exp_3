#include<stdio.h>
int main()
{
    float x,r1,r2,a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    x=b*b-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
        printf("Roots are real\n");

    else if(x<0)
        printf("Roots are imaginary\n");
        else
            printf("Roots are same\n");
        printf("r1=%f\n",r1);
        printf("r2=%f",r2);
        return 0;


}
