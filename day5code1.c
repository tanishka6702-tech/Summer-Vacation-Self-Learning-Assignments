#include<stdio.h>
int main()
{
    int num, i, sum=0;

    printf("enter a num:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    printf("%d is a perfect num",num);
    else
    printf("%d is not a perfect num", num);



    return 0;
}