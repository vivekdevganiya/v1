#include<stdio.h>
main()

{
int x;
int y;
int sum;

printf("enter a value of x:");
scanf("%d",&x);

printf("enter a value of y:");
scanf("%d",&y);

sum=x*x*x+3*x*x+y*y+y*y*y;

printf("answer is:%d",sum);
}