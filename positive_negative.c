/* PROGRAM TO CHECK WHETHER A NUMBER IS POSITIVE OR NEGATIVE */

#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER");
    scanf("%d",&num);
    (num>0)?printf("POSITIVE NUMBER"):printf("NEGATIVE NUMBER");
    return 0;
}