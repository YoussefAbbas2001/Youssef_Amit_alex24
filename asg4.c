/*
Date  : 24/8/2021
Author: youssef abbas 
About : Pointer
*/
#include <stdio.h>

//Function Prototype
void edit(int*ptr);
void point();


int main()
{
    int number ;
    printf("Enter The Number : ");
    scanf("%d",&number);

    printf("\nBefore calling edit : %d",number);
    edit(&number);
    printf("\nAfter calling edit  : %d",number);
    //This happend due to edit take address of original  variable

    point();

    return 0 ;
}


void edit(int*ptr)
{
    (*ptr)++;
}

void point()
{
    printf("\n\n-------------------Point--------------------\n");
    //Store multiple value inside one variable by array
    int x[3] = {5,20,80} ;
    int*ptr2 =x; 
    printf("Numbers : ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(ptr2+i));
    }
    printf("\n\n");
}