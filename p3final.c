#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two number\n");
  scanf("%d,%d",a,b);
  return;
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
  return;
}
void output(int a,int b,int sum)
{
  printf("%d+%d=%d",a,b,sum);
  return;
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
  
}