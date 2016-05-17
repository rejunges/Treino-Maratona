#include <stdio.h>
#include <string.h>

int main(){
	int qt, i, j, num1, num2, soma;
	char nome1[100], nome2[100], escolha1[6], escolha2[6];

	scanf("%d", &qt);
	for(i=0; i<qt; i++){
		scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2);
		scanf("%d %d", &num1, &num2);
		soma=num1+num2;
		if (soma%2==0){
			//Par
			if(strcmp("PAR", escolha1)==0){
				puts(nome1);
			}
			else{
				puts(nome2);
			}
		}
		else{
			//Impar
			if(strcmp("IMPAR", escolha1)==0){
				puts(nome1);
			}
			else{
				puts(nome2);
			}
		}
	}
	return 0;
}