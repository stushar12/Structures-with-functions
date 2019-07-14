#include<stdio.h>
#include<stdlib.h>

struct student
{
  int roll;

};
struct student input(struct student st1[],int x);
struct student output(struct student st2[],int y);
int main()
{

  struct student st[10];

 input(st,10);
}

struct student input(struct student st1[],int x)
{


  printf("\n Enter roll number ");
for(int i=0;i<x;i++)
    scanf("%d",&st1[i].roll);
  return st1;
 output(st1,x);
}
struct student output(struct student st2[],int y)
{
  printf("\nRoll number are\n");
  for(int j=0;j<y;j++)
    printf("%d \n",st2[j].roll);


}
