/*
Date : 17/8/2021
author : youssef Abbas mohamed
Group : alex24
about : simple calculator (control flow) 
*/
#include <stdio.h>

int main()
{   
    float num1,num2; 
    char op;   //Operator Entered by User
    char enter; // Beacuse when press  enter it's considered as op

    printf("Enter The Number 1 : ");
    scanf("%f",&num1);

    printf("Enter Operator : ");
    scanf("%c",&enter);
    scanf("%c",&op);

    printf("Enter The Number 2 : ");
    scanf("%f",&num2);

    switch (op)
    {
    case '*':
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;
    
    case '/':
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        break;
    
    case '+':
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;
    
    case '-':
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;
    
    default:
        printf("\n\t\tWRONG OPERATOR\n\n");
        break;
    }

    return 0;
}