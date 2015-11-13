#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct pontos{
    int x,y;
};
int main(){
    int k, n, m, t, i;
    scanf("%d", &t);
    for (i=0; i<t;i++){
        scanf("%d %d %d", &n, &m, &k);
        int j, l;
        struct pontos pt[1000], pm[1000];
    for (j=0; j<n;j++){ 
            scanf("%d %d", &pt[j].x, &pt[j].y);
        }
        for (j=0; j<m; j++){
            scanf("%d %d", &pm[j].x, &pm[j].y);
        }
    int cord[200000];
 
    for(j=0;j<200000; j++){
        cord[j]=0;
    }
        for (j=0; j<n; j++){
        for (l=0; l<m; l++){
            cord[abs(pt[j].x - pm[l].x)+ abs(pt[j].y - pm[l].y)]+=1;
        }
        }
    int md=0, temp=k;
    for ( j=0; k>0; j++){
        while(cord[j] > 0 && k>0){        
            md+=j;
            cord[j]--;
            k--;
        }
    }
    printf ("%d\n", md);
    }
    return 0;
}