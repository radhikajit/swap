#include<stdio.h>
void main()
{
 int a,b;
 scanf("input numbers %d %d",&a,&b);
 a=a-b;
 b=a+b;
 a=b-a;
 printf("the swapped nos. are a=%d,b=%d",a,b);
}
