#include<stdio.h>
#include<math.h>

int main()

{
    int start, end, num, temp, remainder, digits;
    double sum;

    printf("enter start and end of range:");
    scanf("%d %d", &start, &end);

    printf("armstrong nums are: \n");

    for(num=start; num<=end; num++)
    {
        temp=num;
        sum=0;

        while(temp!=0)
    {
        digits=temp%10;
        sum=sum+(digits*digits*digits);
        temp=temp/10;
    }
    if(sum==num)

    {
        printf("%d\t", num);
    }

    }
    return 0;
    }





    