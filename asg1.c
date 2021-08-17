/*
Date   : 17/8/2021
author : Youssef abbas Mohamed
Group  : Alex24
about  : Check Even or ODD by 4 Different Methods
*/
#include <stdio.h>

int method1(int);
int method2(int);
int method3(int);
int method4(int);

int main()
{
    int num;  //Define number as Integer

    printf("Enter the Number : ");  //prompt Number from user
    scanf("%d",&num);   //take number from user

    if(!method4(num))  
    {
        printf("\nThe number is odd = 0\n");
        printf("The number is even = 1\n");
    }
    else
    { 
        printf("\nThe number is odd = 1\n");
        printf("The number is even = 0\n");        
    }

    return 0;
}

int method1(int num)
{
    //Using Bit-wise operator
    int stat = num & 1; //if LSB is 1 it's Odd
    return stat;
}

int method2(int num)
{
    return num %2;  //if Reminder is 1 it's Odd
}

int method3(int num)
{
    //this Method is not Efficient because the prcesion of float 
    return (int)num /2 == num /2;
}
int method4(int num)
{
    //using Shift Operator
    if ((num >> 1) << 1 == num)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}