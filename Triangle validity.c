#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("Angle a:");
    scanf("%d",&a);
    printf("Angle b:");
    scanf("%d",&b);
    printf("Angle c:");
    scanf("%d",&c);
    x=a+b+c;
    if(x=180)
    {
      printf("triangle is valid") ;
    }
    else
    {
       printf("triangle is not valid");
    }
             return 0;
 
}
