#include<stdio.h>


int main(){

int num1,num2,num3;
printf("enter first number ");
scanf("%d",&num1);
printf("enter second number ");
scanf("%d",&num2);
printf("enter third number ");
scanf("%d",&num3);
if(num1>=num2){
  if (num3>=num2)
printf("The greator number is:%d\n",num1);
}
 else {
 printf("the greator number is:%d\n",num3);
}
 if(num2>=num1){
printf("the greator number is:%d\n" ,num2);
}
 

}