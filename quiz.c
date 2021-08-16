#include <stdio.h>

int main()
{
    int number=4;
    int answer;
    int count;

    answer =1;
    count  =number;
    while(count>=0)
    {
        answer = answer*count;
        count--;
    }

    printf("%d! = %d",number,answer);
    return 0 ;
}