#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("FIZZBUZZ");
    }
    else if(n%3==0){
        printf("FIZZ");
    }
    else if(n%5==0){
        printf("BUZZ");
    }
    else{
        printf("not divisible by 3 or 5");
    }
    return 0;
}
