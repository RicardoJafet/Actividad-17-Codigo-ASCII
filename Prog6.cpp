/*Autor: Ricardo Jafet Granados Chable, Realizado: 31/03/2022
    programa numero 6 parcial 2 en C: Programa que imprime el codigo ASCII y se detenga de 10 en 10.
	*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("------Codigo ASCII------\n");
	for(unsigned char c=0; c<=255; c++){
		printf("%d->[%c]\n",c,c);
		if(c%10==0 && c>0){
			system("PAUSE");
		}
	}
	
	return 0;
}
