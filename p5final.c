#include<stdio.h>
void cmp(int a,int b,int c,int *large)
{
  if (a>b)
  {
    if (a>c)
    {
      *large=a;
    }
    else
    {
      *large=c;
    } 
  }
{
  if (b>c)
   {
       *large=b;
    }
 }
}
void input(int *a,int *b,int *c)
{
  printf("enter any three num\n");
  scanf("%d,%d,%d",a,b,c);
}
void main()
{
  int x,y,z,large;
  input(&x,&y,&z);
  cmp(x,y,z,&large);
  printf("%d is the large num\n",large);
}