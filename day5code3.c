#include<stdio.h>
int main()
{
   int num,i;

   printf("enter num: ");
   scanf("%d", &num);

   printf("factors of %d are: ",num);

   for(i=1; i<=num; i++)
   {
    if(num%i==0)
    {
        printf("%d\t",i);

    }
   }



    return 0;
}