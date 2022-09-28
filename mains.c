#include<stdio.h>
#include<math.h>
void main()
{
    int num,bi=0,a=0,x=0;
    printf("Enter no");
    scanf("%d",&num);
    int c=num;
    while (num!=0)
    {
        bi=bi*10+num%2;
        num/=2;
    }
    while (bi!=0)
    {
        if (bi%10==1)
        {
            a=a+(int)pow(2,x);
        }
        x++;
        bi=bi/10;
    }
    printf("1's complement of %d is %d",c,a);
}