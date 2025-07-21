#include <stdio.h>
int main(){
        int A[10], B[10];
        for(int i=0; i<10; ++i){
            scanf("%d", &A[i]);
        }

//
        for(int i = 9; i>=0; i--){
            B[9-i] = A[i];
            printf("%d %d \n", 9-i, i);
        }

//
        for(int i=0; i<10; ++i){
            printf("%d ", B[i]);
        }
}