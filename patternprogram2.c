//Left Half Pyramid Pattern in C
/*
    *
   **
  ***
 ****
*****
*/
/*#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<=2*(5-i)-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}*/
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<=2*(5-i)-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}