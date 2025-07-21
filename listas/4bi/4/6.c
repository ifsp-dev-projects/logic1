#include <stdio.h>
int main(){
        int A[8], B[8];



        for(int i=0; i<8; ++i){
            scanf("%d", &A[i]);
        }



        for(int i=0; i<8; ++i){
            B[i] = A[i]*A[i];
        }


        for(int i=0; i<8; ++i){
            printf("%d ", B[i]);
        }
}