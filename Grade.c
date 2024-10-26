#include<stdio.h>


void main(){
 int mark1,mark2,mark3;
 printf("Enter the marks of subject 1");
 scanf("%d",&mark1);
 printf("enter the marks of subject 2");
 scanf("%d",&mark2);
 printf("enter the marks of subject 3");
 scanf("%d",& mark3);
  
 float obtain_marks=mark1+mark2+mark3;
  
 float percentage =(obtain_marks/300)*100;
  
 printf("percentage:%f",percentage);

 if(percentage>=90){
 printf("Grade A");
 }
 else if (percentage >=80){
 printf("Grade B");
 }
 else if (percentage >=70){
 printf("Grade C");
 }
 else if (percentage <=60){
 printf("fail");
}
}