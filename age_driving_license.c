/* PROGRAM TO CHECK ELIGIBILITY FOR DRIVING LICENSE USING AGE */

#include <stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE");
    scanf("%d",&age);
    (age>=18)?printf("YOU ARE ELIGIBLE FOR DL"):printf("YOU ARE NOT ELIGIBLE");
    return 0;
    
}