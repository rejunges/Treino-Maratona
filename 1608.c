#include <stdio.h>
 
int main(void){
    int c, j;
    scanf("%d", &c);
    for(j=0; j <c; j++){
        int d, i, b, id, in, q, h, g;
        scanf("%d %d %d", &d, &i, &b);
        int v[i], k, vb[b];
        for(k=0; k<i; k++){
            scanf("%d", &v[k]);
        }
        for(g=0; g<b; g++){
            scanf("%d", &id);
            int cont=0;
            for(h=0; h<id; h++){
                scanf("%d %d", &in, &q);
                cont += v[in] * q;
            }
            vb[g] = cont;
        }
        int m, indiceM;
        m=vb[0];
        indiceM=0;
        for(k=1; k<b; k++){
            if(vb[k]< m ){
                m=vb[k];
                indiceM=k;
            } 
        }
        printf("%d\n", (int)d/m);
    }
}