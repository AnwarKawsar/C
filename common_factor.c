#include<stdio.h>
int main(){
    int a,b,i=0,count=0;
    scanf("%d%d",&a,&b);
    if(a<b){
        while(i<=a){
            i++;
            if(a%i==0&&b%i==0){
                count++;
                
            }
        }
    }else{
        while(i<=b){
            i++;
            if(a%i==0&&b%i==0){
                count++;
               
            }
        }
    }printf("%d",count);
    return 0;
}


