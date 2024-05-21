#include <stdio.h>
//#include<string.h>
struct class
{
  int rate;
  int amount;
  int qty;
  int dis;
  int billamt;
  int gst;
  int netbill;
} s1;
void main()
{
  printf("Enter Rate: "); 
  scanf("%d", &s1.rate);
  printf("Enter Quntity: "); 
  scanf("%d", &s1.qty);
 
  s1.amount = s1.rate*s1.qty;
  s1.dis = s1.amount*0.05;
  s1.billamt = s1.amount-s1.dis;  
  s1.gst = s1.billamt*0.18;
  s1.netbill= s1.billamt+s1.gst;
  
  printf("\n--------------------------------------------");
  printf("\n|%3s|%5s|%5s|%5s|%5s|","Total\nAmount","Disscount","Bill Amount", "Gst","Net Bill");
  printf("\n--------------------------------------------");
  printf("\n|%3d|%10d|%11d|%5d|%8d|",s1.amount,s1.dis,s1.billamt,s1.gst,s1.netbill);
  printf("\n--------------------------------------------");
}