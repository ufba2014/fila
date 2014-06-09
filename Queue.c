#include <stdio.h>
#include <stdlib.h>
#include <FunctionQueue.h>


int main(){// Função principal
	
	No *Fila = (No *) malloc(sizeof(No));
	
	if(Fila== NULL){
		printf("Sem memoria disponivel para alocar a Fila.\n");
		exit(1);
	} 
	else{
		inicia(Fila);
		menu(Fila);	
		free(Fila);
		return 0;
	}
	
}
