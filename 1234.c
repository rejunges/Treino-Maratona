#include <stdio.h>
#include <string.h>

int main(){
	char c;
	int anterior=0;
	//0 é minuscula
	while((c=fgetc(stdin))!= EOF ){
		//Atual-Maiuscula  
		if(c>=65 && c<=90){
			//anterior minuscula
			if(anterior==0){
				printf("%c",c);
				anterior=1;
			}
			else{
				printf("%c", 32+c);
				anterior=0;
			}
		}
		//Atual-Minuscula
		else if(c>=97 && c<=122){
			//anterior minuscula
			if(anterior==0){
				printf("%c",c-32);
				anterior=1;
			}
			else{
				printf("%c",c);
				anterior=0;
			}
		}
		else{
			if(c==10){
				printf("%c",c);
				anterior=0;
			}
			else
				printf("%c",c);
		}
	}
	return 0;
}
