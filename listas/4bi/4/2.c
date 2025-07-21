#include <stdio.h>

int fact(int n) {
    int resultado = 1;
    
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    
    return resultado;
}

int main(){
        int A[6], B[6];
        for(int i=0; i<6; ++i){
            scanf("%d", &A[i]);
        }
        for(int i=0; i<6; ++i){
            B[i] = fact(A[i]);
        }
        for(int i=0; i<6; ++i){
            printf("%d ", B[i]);
        }
}