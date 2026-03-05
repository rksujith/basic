#include<stdio.h>
int main(){
    int n;
    printf("Enter the mark: ");
    scanf("%d",&n);
    if(n>=90 && n<=100){
        printf("grade A");
    }
    else if(n>=75 && n<=89){
        printf("grade B");
    }
    else if(n>=50 && n<=74){
        printf("grade C");
    }
    else{
     printf("Fail");
}
 return 0;
}
