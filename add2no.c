#include<stdio.h>
#include<conio.h>
int add(int a, int b)
{
  int c;
  c= a+b;
  return c
}
void main
{
  int a, b, p;
  printf("Enter the numbers to add:");
  scanf("%d %d", &a, &b);
  p = add(a,b);
  printf("%d", p);
  getch();
}