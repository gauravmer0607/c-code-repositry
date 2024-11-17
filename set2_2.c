#include <stdio.h>

int main(){
    int d,t;
    float speed;
    printf("Enter the distance the bike travelled in km:");
    scanf("%d",&d);
    printf("Enter the time in hours:");
    scanf("%d",&t);
    speed=(d*1000)/(t*60*60);
    printf("The speed of bike is %.2f m/sec",speed);
    return 0;
}