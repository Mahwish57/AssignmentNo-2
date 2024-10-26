#include<stdio.h>
int main() {
    double num1, num2, result;
    char op;
    printf("Enter the first number: ");
    scanf("%lf", &num1); 
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); 

    if (op == '+') {
        result = num1 + num2;
        printf("The result of %.2lf + %.2lf is: %.2lf\n", num1, num2, result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("The result of %.2lf - %.2lf is: %.2lf\n", num1, num2, result);
    } 
    else if (op == '*') {
        result = num1 * num2;
        printf("The result of %.2lf * %.2lf is: %.2lf\n", num1, num2, result);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("The result of %.2lf / %.2lf is: %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is undefined.\n");
        }
    } 
    else {
        printf("Error: Invalid operator. Please enter one of (+, -, *, /).\n");
    }
    return 0;

}
