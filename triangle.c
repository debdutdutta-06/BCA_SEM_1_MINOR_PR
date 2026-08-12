/* PROGRAM TO DETERMINE IF A TRIANGLE IS SCALENE */

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("ENTER THE THREE SIDES OF TRIANGLE");
    scanf("%d%d%d",&side1,&side2,&side3);
    (side1 != side2 && side2 != side3 && side1 != side3)?printf(" IT IS SCALENE TRIANGLE AS IT HAS NO SIDES EQUAL"):printf("IT IS NOT A SCALENE TRIANGLE");
    return 0;
}