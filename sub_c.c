#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

#include <stdlib.h>
int get_num(int n);
bool is_it(int canidate);

int main(){
    int numq=0;
    printf("GG");
    scanf("%d",&numq);
    printf("%d is %d digit number and%sa armstrong number.",numq,get_num(numq),is_it(numq)?" is ":" is not ");
    return 0;
 }

bool is_it(int canidate){
    int digi_num=get_num(canidate);
    int sum=0; 
    for(int i=canidate;i!=0;i/=10){
        int num=i%10;
        int n=1;
        for(int j=0;j<get_num(canidate);j++){
            n*=num;
        }
        sum+=n;
    }
    return sum==canidate;
 }



 
 int get_num(int n){
    int i=0;
    while(n!=0){
        n/=10;
        i++;
        
    }
    return i;
 }