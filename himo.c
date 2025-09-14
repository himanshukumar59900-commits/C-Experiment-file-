#include<stdio.h>
int main()
{ 
  int l,b,area,perimetre;
  printf("enter the length:");
  scanf("%d",&l);

  printf("enter the breath:");
  scanf("%d",&b);

  area=l*b;
  perimetre=2*(l+b);
  printf("the area is %d\n",area);
  printf("the perimetre is %d\n",perimetre);
  return 0;
}