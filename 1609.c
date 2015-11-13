#include <stdio.h>
 
int main(){
    int c, i;
    scanf("%d", &c);
    for(i=0; i<c; i++){
        int n, j, tot=0;
        scanf("%d", &n);
        int cont[n];
        for(j=0; j<n; j++){
            cont[j]=-1;
        }
 
        for(j=0; j<n; j++){
            int k, temp, existe=0;
            scanf("%d", &temp);
 
            for(k=0; k<n; k++ ){
                if(temp == cont[k]){
                    existe = 1;
                    tot++;
                }
            }
 
            if(existe == 0){
                cont[j] = temp;
            }
        }
        printf("%d\n", n-tot);
    }
    return 0;
}