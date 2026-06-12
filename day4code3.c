#include<stdio.h>
int main()
{

    int num, originalnum, remainder;
    int result=0;

    printf("enter a number:");
    scanf("%d",&num);

    originalnum=num;

    while(num!=0)
    {
        remainder = num%10;
        result=result+(remainder*remainder*remainder);
        num= num/10;

    }
     if(result==originalnum)

     printf("%d is an armstrong num", originalnum );

     else

     printf("%d is not an armstrong num", originalnum);

     return 0;

}