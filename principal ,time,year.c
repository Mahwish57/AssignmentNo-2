#include<stdio.h>
int main(void)
{
  float principal ,rate,time,simpleInterest;
  printf("enter the principal amount: ");
  scanf("%f",&principal );
  printf("enter the rate of interest: ");
  scanf("%f",&rate );
  printf("enter the time in years:");
  scanf("%f",&time);
  simpleInterest=(principal*rate*time)/100;
  printf("the simple interest is:%.2f\n",simpleInterest);
  }