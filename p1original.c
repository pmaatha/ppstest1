#include<stdio.h>
int add(int x,int y)
{
  int k=y+x;
  return k;
}
int main()
{
  int a,b;
  printf("enter the two numbers to add\n");
  scanf("%d%d",&a,&b);
  printf("%d+%d=%d\n",a,b,add(a,b));
  return 0;
}

