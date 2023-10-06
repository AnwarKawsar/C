#include<stdio.h>
#include<stdbool.h>
int get_digit(int a);
bool is_it(int x);
int main() {

    int num=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s an armstrong Number.",num,is_it(num)?"":"not");
}
//function to check if the given no is armstrong or not
bool  is_it (int n){
    int t=get_digit(n);
    int sum=0;
    for(int i=n;i!=0;i/=10){
        int digit=i%10;
        int p=1;
         for(int j=0;j<t;j++){
            p*=digit;
         }sum+=p;
    
    }
    return sum==n;
    }
int get_digit(int a){
    int i=0;
    while(a!=0){
        a/=10;
        i++;
    }return i;
}