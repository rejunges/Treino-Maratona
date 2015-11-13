#include <stdio.h>
#include <stdlib.h>
  
int main (){
        
        int i, j;
        float A, B, C, aux, vetor[3];
        scanf ("%f %f %f", &A, &B, &C);
        
        vetor[0] = A;
        vetor[1] = B;
        vetor[2] = C;
  
        
        for(i=2; i >= 1; i--){  
                for(j=0; j < i ; j++) {
                        if(vetor[j]>vetor[j+1]) {
                                aux = vetor[j];
                    vetor[j] = vetor[j+1];
                        vetor[j+1] = aux;
                }      
        }      
    }
    
    C = vetor[0];
        B = vetor[1];
        A = vetor[2];
        
        
        if (A>= (B+C)){
                printf ("NAO FORMA TRIANGULO\n");
        }
        else{
        if (A*A == B*B + C*C){
                printf ("TRIANGULO RETANGULO\n");
        }
        
        if (A*A > B*B + C*C){
                printf ("TRIANGULO OBTUSANGULO\n");
        }
        
        if (A*A < B*B + C*C){
                printf ("TRIANGULO ACUTANGULO\n");
        }
        
        if (A==B && B==C){
                printf ("TRIANGULO EQUILATERO\n");
        }
        
        if ((A==B && B!=C) || (A==C && C!=B) || (B==C && B!=A)){
                printf ("TRIANGULO ISOSCELES\n");
        }
}
        return 0;
}