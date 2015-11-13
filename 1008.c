#include <stdio.h>
  
int main (){
    int num_f, horas;
    float valorporhora, salario;
     
    scanf ("%d%d%f", &num_f, &horas, &valorporhora);
    salario= horas *valorporhora;
     
    printf ("NUMBER = %d\nSALARY = U$ %.2f\n", num_f, salario);
    return 0;
}