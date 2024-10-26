#include<stdio.h>
int main(void)
{
  char username[20];
  char password[20];
  printf("enter username ");
  scanf("%19s",username);
  printf("enter password ");
  scanf("%19s",password );
  if (strcmp(username ,"admin") == 0 && strcmp(password ,"1234")==0){
  printf("login successful ");
  }
  else {
  printf("login failed\n");
  }
  }