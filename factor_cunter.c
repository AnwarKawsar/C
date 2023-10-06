#include<stdio.h>
int main() {
    int a;
    printf("Num1:");
    scanf("%d",&a);
    int count=(a==1?1:2);
    for(int counter=2;counter <= a/2;counter++){
        if (a%counter==0)
        {
            count++;
            
        }
    }
    printf("%d",count);
    return 0;
}