#include <stdio.h>

int main(){
    int salary;
    float bsalary;
    printf("Enter the salary:");
    scanf("%d",&salary);
    char gender;
    printf("Enter the Gender(M/F):");
    scanf(" %c",&gender);
     if(gender=='M' && salary<10000){
        bsalary=salary+salary*0.05+salary*0.02;
        printf("the bonus salary is %.2f",bsalary);
    }
    else if(gender=='M'){
        bsalary=salary+salary*0.05;
        printf("the bonus salary is %.2f",bsalary);
    }
    
    else if(gender=='F' && salary<10000){
        bsalary=salary+salary*0.10+salary*0.20;
        printf("the bnus salary is %.2f",bsalary);
    }
    else if(gender=='F'){
        bsalary=salary+salary*0.10;
        printf("the bonus salary is %.2f",bsalary);
    }
    else{
        printf("Invalid Gender Input.\n");
    }
    return 0;
}