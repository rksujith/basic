#include<stdio.h>
int main(){
    int n,j;
    scanf("%d%d",&n,&j);
    if(n>j)
     printf("%d is greater",n);
      else if(n<j)
       printf("%d is greater",j);
       else
        printf("both are equal");
        return 0;
}
