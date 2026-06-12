#include<stdio.h>
int main()
{
    int num, i, largestprime=0;

    printf("enter a num: ");
    scanf("%d",&num);

    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            int j, isprime=1;

            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isprime=0;
                    break;
                }
            }
            if(isprime)
            {
                largestprime=i;
            }
        }
    }

     printf("largestprime factor=%d", largestprime);


    return 0;

}