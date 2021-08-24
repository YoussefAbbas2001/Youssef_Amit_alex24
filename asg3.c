#include <stdio.h>

void swap1(int num1,int num2); //swap by temp
void swap2(int num1,int num2); //swap mathematically

int main()
{
    int x;
    int y;

    printf("Enter first number : \n");
    scanf("%d",&x);

    printf("Enter second number : \n");
    scanf("%d",&y);

    swap2(x,y);

    return 0;
}
void swap1(int num1,int num2)
{
    int temp ;

    printf("\nx = %d , y = %d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("x = %d , y = %d",num1,num2);

}
void swap2(int num1,int num2)
{
    int temp ;

    printf("\nx = %d , y = %d\n",num1,num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("x = %d , y = %d",num1,num2);

}