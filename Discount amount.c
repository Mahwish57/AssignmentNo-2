#include<stdio.h>


void main(){
 float finalamount, amount ;
 printf("Enter the total amount of shopping ");
  scanf("%f",&amount);
  
 if(amount>5000){
  finalamount =amount-(amount *0.20);
 }
 else if (amount >=3000&&amount<=5000){
 finalamount=amount-(amount*0.10);
 }
  else {
 finalamount=amount;
 }
printf("the finalamount after discount is:%.2f\n",finalamount );
}