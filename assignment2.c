#include <stdio.h>

int main(){
    int option;
    float c,a,b;
    printf("Enter option:");
    scanf("%d",&option);
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    switch(option){
        case 1:
            c=a+b;
            printf("The addition of two numbers is: %.2f\n",c);
            break;
        case 2:
            c=a-b;
            printf("The subraction of two numbers is: %.2f\n",c);
            break;
        case 3:
            c=a*b;
            printf("The multiplication of two numbers is: %.2f\n",c);
            break;
        case 4:
            if(b!=0){
                c=a/b;
                printf("The division of two numbers is: %.2f\n",c);
            }
            else{
                printf("Division by zero is not allowded!\n");
            }
            break;
        default:
            printf("Invalid operation performed!\n");
    }
    return 0;
}