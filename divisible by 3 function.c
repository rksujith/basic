#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE: ");
     scanf("%d",&n);
    if(n%2 == 0 && n%3 == 0)
    {
        printf("Even and divisible by 3");
    }
    else
    {
        printf("not matching condition");
    }
    return 0;
     
    
}
