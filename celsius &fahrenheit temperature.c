#include<stdio.h>
int main(void)
{
   float  temperature ,convertedTemperature ;
   int choice;
   printf("Temperature  conversion menu:\n");
   printf("1.convers celcius to fahrenheit\n");
   printf("2.convers fahrenheit to celcius\n");
   printf("enter your choice(1 or 2):");
   scanf("%d",&choice );
   if (choice==1){
   printf("enter temperature  in celcius");
   scanf("%f,&temperature ");
   convertedTemperature=(temperature *9/5)+32;
   printf("Temperature  in fahrenheit:%.2f\n",convertedTemperature );
   }
   else if(choice==2){
   printf("enter temperature  in fahrenheit:");
   scanf("%f,&temp");
   convertedTemperature =(temperature -32)*5/9;
   printf("Temperature  in celcius:%.2f\n",convertedTemperature );
   }
   else{
   printf("invalid choice! please enter 1 or 2\n");
   }
   }
   