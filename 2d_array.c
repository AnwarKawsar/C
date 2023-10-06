#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
    int A[3][2] ={{1,2},
              {3,4}, 
              {5,6},
                    };

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d,",A[i][j]);
        }printf("\n");
    }
}