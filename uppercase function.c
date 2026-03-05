#include<stdio.h>
int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("UPPERCASE");
    }
    else if(c>='a' && c<='z'){
        printf("lowercase");
    }
    else if(c>='0' && c<='9'){
        printf("digit");
    }
    else{
        printf("special charater");
    }
    return 0;
     
     
}
