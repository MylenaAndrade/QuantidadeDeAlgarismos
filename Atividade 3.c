#include<stdio.h>
/*
Fazer uma fun��o que determine a quantidade
de algarismos de um n�mero inteiro N.
*/

//mostrando que existe uma fun��o
int quantAlgarismo(int n);

//fun��o MAIN
void main(){
	//declara��o de vari�veis 
	int numero, quantidade;
	
	//comandos de entrada e sa�da
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//chamando e guardando a fun��o
	quantidade=quantAlgarismo(numero);
	
	//printando o resultado da fun��o
	printf("A quantidade de algarismo e de: %d", quantidade);
}

int quantAlgarismo(int n){
//declara��o de vari�veis
	 int quant=0;
	 
//estrutura de repeti��o
	do
	{  
    	n = n/10;
		 quant++;
	}while (n > 0);

//retornando a quantidade de algarismos para a MAIN
		return quant;
}

