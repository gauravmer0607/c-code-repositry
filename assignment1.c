#include <stdio.h>

int main(){
    int a,b,c,big;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The larger number is %d\n",big);
    return 0;
}