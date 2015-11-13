#include <stdio.h>
#include <math.h>
 
int main(void){
    int c=0, i;
    scanf("%d", &c);
    for(i=0; i<c; i++){
        int n, m, j, v[11], v2;
        for(j=0; j<=10; j++){
            v[j] = 0;
        }
        scanf("%d %d", &n, &m);
        for(j=0; j<m; j++){
            scanf("%d", &v2);
            v[v2] += 1;
        }
        int venc = -1;
        for(j=0; j<=10; j++){
            if(v[j] >m*0.5) venc = j;
        }
        printf("%d\n", venc);
    }
}
