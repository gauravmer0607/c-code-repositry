//1.Write a C program to find the sum of even and odd numbers between 1 and 100
/*#include <stdio.h>

int main(){
    int n=100,Esum=0,Osum=0;
    for(int i=1;i<=n;i++){
        if (i%2==0)
        {
            Esum+=i;
        }
        else{
            Osum+=i;
        }
    }
    printf("The sum of even between 1 amd 100 is %d\n",Esum);
    printf("The sum of odd between 1 amd 100 is %d\n",Osum);
    return 0;
}*/

//2.Write a c program to print first n natural numbers starting from 1
/*#include <stdio.h>

int main(){
    int n,i=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/

//3.Write a c program to print first n odd numbers using three different methods
/*#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i =1,count=1;count<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);
            count++;
        }
    }
    return 0;

}*/

/*#include<stdio.h>

int main(){
    int n,i =1,count=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(count<=n){
        if(i%2!=0){
            printf("%d\n",i);
            count++;
        }
        i++;
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int n,i =1,count=1;
    printf("Enter n:");
    scanf("%d",&n);
    do{
        if(i%2!=0){
            printf("%d\n",i);
            count++;
        }
        i++;
    }while(count<=n);
    return 0;
}*/

//4.Write a c program to find factorial of a number

/*#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0){
            printf("the factorial is 1.\n");
    }
    else if(n>0){
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("The factorail of %d is %d.\n",n,fact);
    }
    else{
        printf("Factorial not exist for negative numbers.\n");
    }
    
    return 0;
}*/


//5.Write a c program to find sum of following series 1+3+5+...upto n term

/*#include <stdio.h>

int main(){
    int n,sum=0,i=1,count=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(count<=n){
        if(i%2!=0){
            sum+=i;
            count++;
        }
        i++;
    }
    printf("The sum of this series 1+3+5+...upto %d term  is %d\n",n,sum);
    return 0;
}*/

//6.Write a c program to find sum of following series 1/2+3/4+5/6+...upto n term

#include <stdio.h>

int main(){
    int n;
    float sum=0.0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=(float)(2*i-1)/(2*i);
    }
    printf("The sum of these series 1/2+3/4+5/6+...upto %d term is %.2f",n,sum);
    return 0;
}