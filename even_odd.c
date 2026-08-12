/* PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD */

#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER");
    scanf("%d",&num);
    (num%2==0)?printf("EVEN NUMBER"):printf("ODD NUMBER");
    return 0;
}