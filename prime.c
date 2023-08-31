#include <stdio.h>


int main()
{
    int num;
    printf("enter the number to find the prime::");
    scanf("%d",&num);
    int prime=1;

    for (int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            prime=0;
            break;
        }

    }
        if (prime==0)
        {
            printf("the number is not prime");
        }
        else
        {
            printf(" the number is prime");
        }

    
    return 0;
}