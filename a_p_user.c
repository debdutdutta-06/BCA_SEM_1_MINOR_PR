#include <stdio.h>
int main()
{
    int l,b,a,p;
    printf("enter the length and breadth of rectangle");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("\narea of rectangle is %d",a);
    printf("\nperimeter of rectangle is %d",p);
    return 0;

}