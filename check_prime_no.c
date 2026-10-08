#include <stdio.h>
int main()
{
    int i,isprime=1;
    printf("Enter a number to check the number is prime or not:");
    scanf("%d",&i);
    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        {
            isprime=0;
            break;
        }
    }
    if (isprime==1)
    {
        printf("is prime");
    }
    else
    {
        printf("is not prime");
    }
    return 0;
}
