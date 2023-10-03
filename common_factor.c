#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z, count = 0;
    printf("Num1:");
    scanf("%d",&x);
    printf("Num2:");
    scanf("%d",&y);
    if (x > y) {
        for (int i = 1; i <= y; i++) {
            if (x % i == 0 && y % i == 0) {
            count++;
            }
        }   printf("\n %d",count);
    }else {
        for (int i = 1; i <= x; i++) {
            if (x % i == 0 && y % i == 0) {
            count++;}
        }printf("\n %d",count);
    }
return 0;
 }


