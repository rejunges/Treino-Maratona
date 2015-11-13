#include <stdio.h>
#include <string.h>
 
int main(){
    int valor;
    char string1[10001], string2[10001];
    scanf("%d", &valor);
    int i,j, cont=0, ac[valor];
     
    for (i=0; i<valor; i++){
        scanf("%s %s", string1, string2);
        cont=0;
        //97-122
        for (j=0; string1[j]!='\0'; j++){
            if(string1[j]< string2[j]){
                cont+=string2[j]-string1[j];
            }
            else if (string1[j]>string2[j]){
                cont+= ('z'-string1[j])+(string2[j]-'a')+1;
            }
        }
        ac[i]=cont;
    }
    for (i=0; i<valor; i++){
        printf ("%d\n", ac[i]);
    }
 
    return 0;
}