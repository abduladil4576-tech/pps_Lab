#include <stdio.h>
int main()
{
    int a=5;
    int b=6;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a is %d\n",a);
    printf("b is %d",b);
    return 0;
}
