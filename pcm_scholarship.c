#include <stdio.h>
int main()
{
    int p,c,m;
    printf("ENTER THE NUMBER OF PHYSICS, CHEMISTRY AND MATHS MARKS");
    scanf("%d,%d,%d",&p,&c,&m);
    (p>=95||c>=95||m>=95)?printf(" CONGRATULATIONS YOU ARE ELIGIBLE FOR SCHOLARSHIP"):printf("SORRY, YOU ARE NOT ELIGIBLE FOR SCHOLARSHIP");
    return 0;
    
}
