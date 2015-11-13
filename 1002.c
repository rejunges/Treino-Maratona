#include <stdio.h>
#include <math.h>
  
#define T 3.14159
  
int main() {
   
    double raio, area;
      
    scanf ("%lf", &raio);
    area=pow(raio,2)*T;
    printf ("A=%.4lf\n",area);
      
    return 0;
}