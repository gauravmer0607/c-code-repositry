#include <stdio.h>

int main(){
    int n,sum=0;
    int i =1;
    printf("Enter how many  numbers sum you want?");
    scanf("%d",&n);
    do{
        int a;
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }while(i<=n);
    printf("the sum is %d\n",sum);
    return 0;
}