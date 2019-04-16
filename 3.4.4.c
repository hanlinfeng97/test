#include<stdio.h>
int main()
{
    double a,b,c;
    a=1.674;
    b=1.322;
    printf("\n%4.2f",a);
    printf("\n%4.2f",b);
    printf("\n----");
    a=a-0.004;
    b=b-0.002;
    c=a+b;
    printf("\n%4.2f\n",c);
}
