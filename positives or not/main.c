#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor [10];
	int i; 
	int pos=0;
	int neg=0; 
	int nul=0;
	
	
	for (i=0; i<10; i++){
		
		printf ("Entre com o valor %i\n", i+1);
		scanf ("%i", &vetor[i]);
		
		if (vetor[i] >0){
			pos++;
		}else if (vetor[i]<0){
			neg++;
		}else{
			nul++;
		}
		}
	printf ("positivos = %i\n", pos);
	printf ("negativos = %i\n", neg);
	printf ("Nulos = %i\n", nul);
	
		return 0;
	}
	
	


