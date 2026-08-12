/* PROGRAM TO CALCULATE SIMPLE INTEREST USING PRINCIPAL, RATE AND TIME */

#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter the principle amount, rate of interest and time in years");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nsimple interest is %f",si);
    return 0;

}
