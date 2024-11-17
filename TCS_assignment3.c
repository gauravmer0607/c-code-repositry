//to display even numbers between1-20
/*#include <stdio.h>

int main(){
    for(int i=1;i<=20;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/

//to find and print factorial of a number
/*#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0){
        printf("Factorial of 0 is 1.\n");
    }
    else if(n>0){
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        printf("factorial of %d is %d\n",n,fact);
    }
    else{
        printf("no factorial for negative numbers.\n");
    }
    return 0;
}*/

//to display odd numbers between1 and n (where n is inputted by user)
/*#include <stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}*/

//to find out NCR factor of given number.
/*#include <stdio.h>

int main(){
    int n,r,nfact=1,rfact=1,c,cfact=1;
    int NCR;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. Ensure that 0 <= r <= n.\n");
        return 1;
    }
    for(int i=1;i<=n;i++){
        nfact*=i;
    }
    for(int j=1;j<=r;j++){
        rfact*=j;
    }
    c=n-r;
    for(int k=1;k<=c;k++){
        cfact*=k;
    }
    NCR=nfact/(rfact*cfact);
    printf("THE NCR is %d\n",NCR);
    return 0;
}*/

//to print square of n numbers, where value of n is inputted by the user.
/*#include <stdio.h>

int main(){
    int n,square;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        square=i*i;
        printf("%d*%d=%d\n",i,i,square);
    }
    return 0;
}*/

//to find the sum of even and odd numbers between x and y.
/*#include <stdio.h>

int main(){
    int x,y,esum=0,osum=0;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    while(x<=y){
        if(x%2==0){
            esum+=x;
        }
        else{
            osum+=x;
        }
        x++;
    }
    printf("The sum of even numbers between x and y is %d\n",esum);
    printf("The sum of odd numbers between x and y is %d\n",osum);
    return 0;
}*/

//to find the sum of the following series: 1/1!+2/2!+3/3!+4/4!+............ upto n terms
/*#include <stdio.h>

int main(){
    int n,fact=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        fact*=i;
        sum+= (float)i/fact;
    }
    printf("the sum of the following series: 1/1!+2/2!+3/3!+4/4!+............ upto %d terms is %.2f\n",n,sum);
    return 0;
}*/

//to find the sum of the following series: 1^2/1! +2^2/2!+3^2/3!+4^2/4! +..........upto n terms.
/*#include <stdio.h>

int main(){
    int n,fact=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        fact*=i;
        sum+= (float)(i*i)/fact;
    }
    printf("the sum of the following series: 1^2/1! +2^2/2!+3^2/3!+4^2/4! +..........upto %d terms is %.2f\n",n,sum);
    return 0;
}*/

//to find the sum of the following series: 1/1!+2^2/2!+3^3/3!+4^4/4!+.............upto n terms.
/*#include <stdio.h>
#include <math.h>

int main(){
    int n,fact=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        fact*=i;
        sum+= (float)pow(i,i)/fact;
    }
    printf("the sum of the following series: 1/1!+2^2/2!+3^3/3!+4^4/4!+.............upto %d terms is %.2f ",n,sum);
    return 0;
}*/

//to add digits of a number.
#include <stdio.h>

int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    printf("the sum of the %d\n",sum);
    return 0;
}