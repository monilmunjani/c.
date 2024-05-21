#include <stdio.h>
#include<string.h>
struct class
{
  int number;
  char name[20];
  int mark[5];
  int total;
  int per;
} s1;
int main()
{
  int i;
  system("clear");
  for(i=1;i<=3;i++)
  {
  printf("Enter Roll No: "); 
  scanf("%d", &s1.number);
  printf("Enter Name: "); 
  scanf("%s", &s1.name);
  printf("Enter the marks:\n");
  printf("Subject 1:");
  scanf("%d", &s1.mark[0]);
  printf("Subject 2:");
  scanf("%d", &s1.mark[1]);
  printf("Subject 3:");
  scanf("%d", &s1.mark[2]);
  printf("Subject 4:");
  scanf("%d", &s1.mark[3]);
  printf("Subject 5:");
  scanf("%d", &s1.mark[4]);
  
  s1.total = s1.mark[0] + s1.mark[1] + s1.mark[2] + s1.mark[3] + s1.mark[4]; 
  s1.per = s1.total/5;
  printf("--------------------------");
  printf("\nStuden Name:-%s",s1.name);
  printf("\n--------------------------");
  printf("\n Rollno :%d", s1.number);
  printf("\n Mark1 :%d", s1.mark[0]);
  printf("\n Mark2 :%d", s1.mark[1]); 
  printf("\n Mark3 :%d", s1.mark[2]);
  printf("\n Mark4 :%d", s1.mark[3]); 
  printf("\n Mark5 :%d", s1.mark[4]);
  printf("\n--------------------------");
  printf("\n Total :%d\tPer :%d",s1.total,s1.per);
  printf("\n--------------------------\n");
  }
  return 0;
}