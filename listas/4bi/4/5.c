#include <stdio.h>

int main(){
	int ma = 20;
	int mb = 30;
	int mc = 50;
        int A[ma], B[mb], C[mc];
        for(int i=0; i<20; ++i){
            scanf("%d", &A[i]);
        }



        for(int i=0; i<30; ++i){
            scanf("%d", &B[i]);
        }


        for(int i=0; i<20; ++i){
            C[i] = A[i];
        }



        for(int i=20; i<50; ++i){
            C[i] =B[i-20];
        }


        for(int i=0; i<50; ++i){
            printf("%d ", C[i]);
        }
        
}