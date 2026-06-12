#include<stdio.h>
int main()
{
    int num, i, t1=0, t2=1, t3;
    
    printf("enter a number: ");
    scanf("%d", &num);

    printf( "enter a fibonaacci series\n");

    for(i=0; i<=num; i++)
{
    printf("%d \n" , t1);
    t3=t1+t2 ;
    t1=t2 ;
    t2=t3;

}



    return 0;
}

