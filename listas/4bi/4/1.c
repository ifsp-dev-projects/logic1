#include <stdio.h>

int main(){
    int mkx = 5;
    int A[mkx], B[mkx];
    for(int i =0; i<5; i++){
        scanf("%d",&A[i]);
    }
    for(int i =0; i<5; i++){
        B[i] = A[i]*3;
    }
    for(int i =0; i<5; i++){
        printf("%d ",B[i]);
    }
    return 0;
}