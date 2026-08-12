#include <stdio.h>
int main()
{
    int cp,sp;
    printf("ENTER THE COST PRICE");
    scanf("%d",&cp);
    printf("ENTER THE SELLING PRICE");
    scanf("%d",&sp);
    (sp>cp)?printf("PROFIT "):printf("LOSS ");
    return 0;

}