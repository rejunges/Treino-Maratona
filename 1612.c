#include <stdio.h>
#include <math.h>
 
int main(void){
    int c=0, i=0;
    scanf("%d", &c);
    for(i = 0; i<c; i++){
        unsigned long long int n=0;
        scanf("%llu", &n);
        printf("%d\n", (int) ceil((double)n/2.0));
    }
    return 0;
}