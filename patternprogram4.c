//Inverted Right Half Pyramid Pattern in C
/*
12345
1234
123
12
1
*/
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}