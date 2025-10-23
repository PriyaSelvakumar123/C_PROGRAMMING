
#include <stdio.h>

int main()
{
int a,b,c,d,e;
printf("ENTER THE HEIGHT OF THE TREE: ");
scanf("%d",&a);
printf("ENTER THE BREATH OR WIDTH OF THE TREE: ");
scanf("%d",&b);
printf("ENTER THE LENGTH OF THE LADDER: ");
scanf("%d",&c);
 d=c*c;
 e=a*a+b*b;
 if(d==e)
 printf("it obeys pythogros therom");
 else
 printf("it not obeys pythogros therom");

    return 0;
}
