#include <stdio.h>
 
int main(){
    int t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        int n, c, m;
        scanf("%d %d %d", &n, &c, &m);
        int cont[n+1],j,k;
        for(j=0; j<n+1; j++){
            cont[j]=0;
        }
 
        for(j=0; j<m; j++){
            int temp;
            scanf("%d", &temp);
            cont[temp]++;
        }
 
        int energia=0, cap=c, max, u;
 
        for(j=n; j>=0; j--){
            if(cont[j] > 0 && c==cap){
                u = 0;
                max = j;
            }
            while(c!=0 && cont[j]>0){
                if(u<j) u=j;
                cont[j]--;
                c--;
            }
            if(c==0){
                energia += max*2;
                c=cap;
            }
            if(cont[j] > 0){
                j++;
            }
        }
        if(c < cap){
            energia += u*2;
        }
                 
        printf ("%d\n",energia);
    }
    return 0;
}