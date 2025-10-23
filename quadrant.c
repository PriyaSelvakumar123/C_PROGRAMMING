#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the numbers a and b ");
 scanf(" %d %d",&a,&b);
 if(a==0 && b==0)
 printf("the given two numbers (%d,%d)are in origin",a,b);
 else if (a==0 && b<0)
  printf("the given two numbers (%d,%d)are in negative y axis",a,b);
   else if (a==0 && b>0)
  printf("the given two numbers (%d,%d)are in positive y axis",a,b);
 else if (b==0 && a>0)
  printf("the given two numbers (%d,%d)are in negative x axis",a,b);
 else if (b==0 && a<0)
  printf("the given two numbers (%d,%d)are in positive x axis",a,b);
 else if(a>0 && b>0)
 printf("the given two numbers (%d,%d) are in first quadrant",a,b);
 else if(a<0 && b>0)
 printf("the given two numbers (%d,%d)are in second quadrant",a,b);
 else if(a>0 && b<0)
 printf("the given two numbers (%d,%d)are in third quadrant",a,b);
 else 
 printf("the given two numbers (%d,%d)are in fourth quadrant",a,b);
}