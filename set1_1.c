#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0){
        int r;
        float carea;
        const float PI=3.14;
        printf("Enter the radius:");
        scanf("%d",&r);
        carea=PI*r*r;
        printf("The area of circle is %.2f",carea);
    }
    else if(n<0){
        int l,b,Rarea;
        printf("Enter the length:");
        scanf("%d",&l);
        printf("Enter the breadth");
        scanf("%d",&b);
        Rarea=l*b;
        printf("The area of rectangle is %d",Rarea);
    }
    else{
        printf("The number is zero");
    }
    return 0;
}