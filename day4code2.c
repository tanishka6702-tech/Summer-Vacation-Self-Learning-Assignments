#include<stdio.h>
int main()
{
   int n, i;
   int t1=0, t2=1, t3;

   printf("enter n");
   scanf("%d",&n);

   if(n==0)
   printf("nth fibonnacci term= %d",t1);

   else if(n==1)
   printf("nth fibonnacci term= %d" ,t2);

   else 
   {
    for(i=2; i<=n; i++  )
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    printf("nth fibonacci term = %d", t2);
   }



    return 0;
}