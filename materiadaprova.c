#include <stdio.h>
#include <stdlib.h>
int TAM = 8;
int j, aux, i;

/***************
Demonstre a matriz de trocas "ao menos 8 linhas" 
Para: 
	Bubble	Insert Select
	Implemente o SelectSort, caso ainda não tenha feito...
*********/

void mostrarVetor(int *v, int b){
		printf("%i ",v[b]);
		if (b >= TAM){
			printf(" eh noix..\n");
		}
		else 
			mostrarVetor(v,b+1); 
}

void setVetor(int *v) {
   int i;
   for (i=0; i<TAM; i++) 
    	v[i] = 10 + rand()%90;   
}

void insertSort(int *v){
	printf("Insert Sort para %i elementos\n",TAM);
	for(i = 1; i < TAM; i++){
		for(j = i; j > 0; j--){
				if(v[j] < v[j-1]){
					aux   = v[j-1];
					v[j-1]= v[j];
					v[j]  = aux;
					mostrarVetor(v,0);
				} else break;	
		}

	//	printf(".");						
	}
}

void bubbleSort(int *v){
	printf("Bubble Sort para %i elementos\n",TAM);
	for (i=0;i<TAM-1;i++){
		for (j=i+1; j<TAM; j++){
			if (v[i]>v[j]){
				mostrarVetor(v,0);
				aux = v[j];
				v[j]= v[i];
				v[i]= aux;
				
			}
		}	
	}
}

void selectSort(int *v){
	printf("Select Sort para %i elementos\n",TAM);
	do{
		for(i = 1; i <= TAM; i++){
			j = i - 1;
			if(v[j] > v[j+1]){
				aux = v[i];
				if((v[j] >= 0) && (aux > v[j])){
					v[j + 1] = v[j];
					v[j] = aux;
					j--;
				}	
				mostrarVetor(v,0);			
			}
			else break;
		}
	}while(v[j] > v[j + 1]);
}

void main(){
	int  v[8] = {26,55,31,19,87,72,23,45};
	//setVetor(v);
	//insertSort(v);
	//bubbleSort(v);
	selectSort(v);
	mostrarVetor(v,0);
	printf(" pronto!\n");
}
 